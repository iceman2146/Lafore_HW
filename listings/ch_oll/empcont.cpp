// empcont.cpp
// 
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class student
{
private:
	string school;
	string degree;
public:
	void getedu()
	{
		cout << "  ������� �������� �������� ���������: "; cin >> school;
		cout << "  ������� ������� �����������\n";
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
class employee
{
private:
	string name;
	unsigned long number; 
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
class manager
{
private:
	string title;
	double  dues;
	employee emp;
	student stu;
public:
	void getdata()
	{
		emp.getdata();
		cout << "  ������� ���������: "; cin >> title;
		cout << "  ������� ����� ������� � �����-����: "; cin >> dues;
		stu.getedu();
	}
	void putdata() const
	{
		emp.putdata();
		cout << "\n  ���������: " << title;
		cout << "\n  ����� ������� � �����-����: " << dues;
		stu.putedu();
	}
};
///////////////////////////////////////////////////////////
class scientist
{
private:
	int pubs;
	employee emp;
	student stu;
public:
	void getdata()
	{
		emp.getdata();
		cout << "  ������� ���������� ����������: "; cin >> pubs;
		stu.getedu();
	}
	void putdata() const
	{
		emp.putdata();
		cout << "\n  ���������� ����������: " << pubs;
		stu.putedu();
	}
};
///////////////////////////////////////////////////////////
class laborer
{
private:
	employee emp;
public:
	void getdata()
	{ 
		emp.getdata();
	}
	void putdata() const
	{ 
		emp.putdata();
	}
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
