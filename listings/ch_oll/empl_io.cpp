// empl_io.cpp
// �������� ����/����� �������� employee
// ��������� �������� ������������ ��������
#include <fstream>      // ��� ��������� �������� �������
#include <iostream>
#include <typeinfo>     // ��� typeid()
using namespace std;
#include <process.h>    // ��� exit()

const int LEN = 32;     // ������������ ����� �������
const int MAXEM = 100;  // ������������ ����� ����������

enum employee_type { tmanager, tscientist, tlaborer };
///////////////////////////////////////////////////////////
class employee                // ����� employee 
{
private:
	char name[LEN];           // ������� ���������
	unsigned long number;     // ����� ���������
	static int n;             // ������� ����� ����������
	static employee* arrap[]; // ������ ���������� �� ����� ����������
public:
	virtual void getdata()
	{
		cin.ignore(10, '\n');
		cout << "  ������� �������: "; cin >> name;
		cout << "  ������� �����: ";    cin >> number;
	}
	virtual void putdata()
	{
		cout << "\n  �������: " << name;
		cout << "\n  �����: " << number;
	}
	virtual employee_type get_type(); // �������� ���
	static void add();                // �������� ���������
	static void display();            // ������� ������ ��� ����
	static void read();               // ������ �� �����
	static void write();              // ������ � ����
};
//---------------------------------------------------------
// ����������� ����������
int employee::n;                  // ������� ����� ����������
employee* employee::arrap[MAXEM]; // ������ ���������� �� ����� ����������
///////////////////////////////////////////////////////////
// ����� manager (���������)
class manager : public employee
{
private:
	char title[LEN];  // ����� ("����-���������" � �. �.)
	double  dues;     // ������ �����-�����
public:
	void getdata()
	{
		employee::getdata();
		cout << "  ������� �����: ";       cin >> title;
		cout << "  ������� ������: "; cin >> dues;
	}
	void putdata()
	{
		employee::putdata();
		cout << "\n  �����: " << title;
		cout << "\n  ������ �����-�����: " << dues;
	}
};
///////////////////////////////////////////////////////////
// ����� scientist (������)
class scientist : public employee
{
private:
	int pubs;         // ����� ����������
public:
	void getdata()
	{
		employee::getdata();
		cout << "  ������� ����� ����������: "; cin >> pubs;
	}
	void putdata()
	{
		employee::putdata();
		cout << "\n  ����� ����������: " << pubs;
	}
};
///////////////////////////////////////////////////////////
// ����� laborer (�������)
class laborer : public employee
{
};
///////////////////////////////////////////////////////////
// �������� ��������� � ������ (�������� � ��)
void employee::add()
{
	char ch;
	cout << "'m' ��� ���������� ���������"
		"\n's' ��� ���������� �������"
		"\n'l' ��� ���������� ��������"
		"\n��� �����: ";
	cin >> ch;
	switch(ch)
	{   // ������� ������ ���������� ����
	case 'm': arrap[n] = new manager;  break;
	case 's': arrap[n] = new scientist; break;
	case 'l': arrap[n] = new laborer;  break;
	default: cout << "\n����������� ��� ���������\n"; return;
	}
	arrap[n++]->getdata();      // �������� ������ �� ������������
}
//---------------------------------------------------------
// ������� ������ ��� ���� ����������
void employee::display()
{
	for(int j = 0; j < n; j++)
	{
		cout  << (j + 1);       // ������� �����
		switch(arrap[j]->get_type()) // ������� ��� 
		{
		case tmanager:  cout << ". ���: ��������";  break;
		case tscientist: cout << ". ���: ������"; break;
		case tlaborer:   cout << ". ���: �������";  break;
		default: cout << ". ����������� ���";
		}
		arrap[j]->putdata();    // ����� ������
		cout << endl;
	}
}
//---------------------------------------------------------
// ������� ���� �������
employee_type employee::get_type()
{
	if(typeid(*this) == typeid(manager))
		return tmanager;
	else if(typeid(*this) == typeid(scientist))
		return tscientist;
	else if(typeid(*this) == typeid(laborer))
		return tlaborer;
	else
	{ cerr << "\n������������ ��� ���������"; exit(1); }
	return tmanager;
}
//---------------------------------------------------------
// �������� ��� �������, ���������� � ������, � ����
void employee::write()
{
	int size;
	cout << "���� ������ " << n << " ����������.\n";
	ofstream ouf;               // ������� ofstream � �������� ����
	employee_type etype;        // ��� ������� ������� employee

	ouf.open("EMPLOY.DAT", ios::trunc | ios::binary);
	if(!ouf)
	{ cout << "\n���������� ������� ����\n"; return; }
	for(int j = 0; j < n; j++)  // ��� ������� �������
	{                           // �������� ��� ���
		etype = arrap[j]->get_type();

		// �������� ������ � ����
		ouf.write((char*)&etype, sizeof(etype));
		switch(etype)           // ����� ��� ������
		{
		case tmanager:   size  = sizeof(manager); break;
		case tscientist: size  = sizeof(scientist); break;
		case tlaborer:   size  = sizeof(laborer); break;
		}  

		// ������ ������� employee � ����   
		ouf.write((char*)(arrap[j]), size);
		if(!ouf)
		{ cout << "\n������ � ���� ����������\n"; return; }
	}
}
//---------------------------------------------------------
// ������ ���� ������ �� ����� � ������
void employee::read()
{
	int size;               // ������ ������� employee 
	employee_type etype;    // ��� ���������
	ifstream inf;           // ������� ifstream � �������� ����
	inf.open("EMPLOY.DAT", ios::binary);
	if(!inf)
	{ cout << "\n���������� ������� ����\n"; return; }
	n = 0;                  // � ������ ���������� ���
	while(true)
	{                       // ������ ���� ���������� ���������
		inf.read((char*)&etype, sizeof(etype));
		if(inf.eof())   // ����� �� ����� �� EOF
			break;
		if(!inf)        // ������ ������ ����
		{ cout << "\n���������� ������ ����\n"; return; }
		switch(etype)
		{               // ������� ������ ���������
		case tmanager:  // ����������� ����
			arrap[n] = new manager;
			size = sizeof(manager);
			break;
		case tscientist:
			arrap[n] = new scientist;
			size = sizeof(scientist);
			break;
		case tlaborer:
			arrap[n] = new laborer;
			size = sizeof(laborer);
			break;
		default: cout << "\n����������� ��� � �����\n"; return;
		}                     // ������ ������ �� �����
		inf.read((char*)arrap[n], size);
		if(!inf)              // ������, �� �� EOF
		{ cout << "\n������ ������ �� ����� ����������\n"; return; }
		n++;                  // ������� ���������� ���������
	}                         // end while
	cout << "���� ������ " << n << " ����������\n";
}
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	char ch;
	while(true)
	{
		cout << "'a' - ���������� �������� � ���������"
			"\n'd' - ������� �������� ��� ���� ����������"
			"\n'w' - �������� ��� ������ � ����"
			"\n'r' - ��������� ��� ������ �� �����"
			"\n'x' - �����"
			"\n��� �����: ";
		cin >> ch;
		switch(ch)
		{
		case 'a':           // �������� ���������
			employee::add(); break;
		case 'd':           // ������� ��� ��������
			employee::display(); break;
		case 'w':           // ������ � ����
			employee::write(); break;
		case 'r':           // ������ ���� ������ �� �����
			employee::read(); break;
		case 'x': exit(0);  // �����
		default: cout << "\n����������� �������";
		}                   // end switch
	}                       // end while

	return 0;
}