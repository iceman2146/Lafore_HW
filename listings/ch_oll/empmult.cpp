// empmult.cpp
// ������������� ������������
#include <iostream>
using namespace std;
const int LEN = 80;       // ������������ ����� �����
///////////////////////////////////////////////////////////
class student             // �������� �� �����������
{
private:
	char school[LEN];     // �������� �������� ���������
	char degree[LEN];     // ������� �����������
public:
	void getedu()
	{
		cout << "  ������� �������� �������� ���������: ";
		cin >> school;
		cout << "  ������� ������� ������� �����������\n";
		cout << "  (�������� ������, ��������, �������, �������� ����): ";
		cin >> degree;
	}
	void putedu() const
	{
		cout << "\n  ������� ���������: " << school;
		cout << "\n  �������: " << degree;
	}
};
///////////////////////////////////////////////////////////
class employee            // ����� ���������
{
private:
	char name[LEN];       // ��� ����������
	unsigned long number; // ����� ����������
public:
	void getdata()
	{
		cout << "\n  ������� �������: "; cin >> name;
		cout << "  ������� �����: ";     cin >> number;
	}
	void putdata() const
	{
		cout << "\n  �������: " << name;
		cout << "\n  �����: " << number;
	}
};
///////////////////////////////////////////////////////////
class manager : private employee, private student // ��������
{
private:
	char title[LEN];      // ��������� ����������
	double  dues;         // ����� ������� � �����-����
public:
	void getdata()
	{
		employee::getdata();
		cout << "  ������� ���������: "; cin >> title;
		cout << "  ������� ����� ������� � �����-����: "; cin >> dues;
		student::getedu();
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  ���������: " << title;
		cout << "\n  ����� ������� � �����-����: " << dues;
		student::putedu();
	}
};
///////////////////////////////////////////////////////////
class scientist : private employee, private student // ������
{
private:
	int pubs;             // ���������� ����������
public:
	void getdata()
	{
		employee::getdata();
		cout << "  ������� ���������� ����������: "; cin >> pubs;
		student::getedu();
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  ���������� ����������: " << pubs;
		student::putedu();
	}
};
///////////////////////////////////////////////////////////
class laborer : public employee // �������
{
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	manager m1;
	scientist s1, s2;
	laborer l1;

	// ������ ���������� � ���������� �����������
	cout << endl;
	cout << "\n���� ���������� � ������ ���������";
	m1.getdata();

	cout << "\n���� ���������� � ������ ������";
	s1.getdata();

	cout << "\n���� ���������� � ������ ������";
	s2.getdata();

	cout << "\n���� ���������� � ������ �������";
	l1.getdata();

	// ������� ���������� ���������� �� �����
	cout << "\n���������� � ������ ���������";
	m1.putdata();

	cout << "\n���������� � ������ ������";
	s1.putdata();

	cout << "\n���������� � ������ ������";
	s2.putdata();

	cout << "\n���������� � ������ �������";
	l1.putdata();
	cout << endl;

	return 0;
}
