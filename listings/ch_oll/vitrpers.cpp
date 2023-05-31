// vitrpers.cpp
// ����������� ������� � ����� person
#include <iostream>
using namespace std;
///////////////////////////////////////////////
class person                           // ����� person
{
protected:
	char name[40];
public:
	void getName()
	{ cout << "  ������� ���: "; cin >> name; }
	void putName()
	{ cout << "  ���: " << name << endl; }
	virtual void getdata() = 0;       // ������ �����������
	virtual bool isOutstanding() = 0; // �������                                        
};
////////////////////////////////////////////////
class student : public person   // ����� student
{
private:
	float gpa;					// ������� ����
public:
	void getdata()				// ��������� ������ �� ������� � ������������
	{                       
		person::getName();
		cout << "  ������� ���� �������:  "; cin >> gpa;
	}
	bool isOutstanding()
	{ return (gpa > 3.5) ? true : false; }
};
////////////////////////////////////////////////
class professor : public person // ����� professor
{
private:
	int numPubs;				// ����� ����������
public:
	void getdata()				// ��������� ������ � �������� �
	{							// ������������
		person::getName();
		cout << "  ����� ����������:  "; cin >> numPubs;
	}
	bool isOutstanding()
	{ return (numPubs > 100) ? true : false; }
};
////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	person* persPtr[100];	// ������ ���������� �� person
	int n = 0;				// ����� �����, ��������� � ������ char choice;
	char choice;

	do {
		cout << " �������� (s) ��� ������� (p): ";
		cin >> choice;
		if(choice == 's')				// ������� ������ ������� 
			persPtr[n] = new student;   // � ������
		else							// ������� ������
			persPtr[n] = new professor; // �������� � ������
		persPtr[n++]->getdata();		// ������ ������ � �������
		cout << " ������ ��� ������� (y/n)? "; // ������� ��� �������
		cin >> choice;
	} while(choice == 'y');				// ����, ���� ����� 'y'

	for(int j = 0; j < n; j++)
	{
		persPtr[j]->putName();			// ������� ��� �����,
		if(persPtr[j]->isOutstanding())				// �������� � 
			cout << "  ��� ���������� �������!\n";	// ����������
	}

	return 0;
}                                 // ����� main()
