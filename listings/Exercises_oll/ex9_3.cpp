// ex9_3.cpp
// ������������� ������������ ������ ����������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class publication
{
private:
	string title;
	float price;
public:
	void getdata()
	{
		cout << "\n������� ���������:";cin >> title;
		cout << "������� ����:";cin >> price;
	}
	void putdata()const
	{
		cout << "\n���������:" << title;
		cout << "\n����:" << price;
	}
};
///////////////////////////////////////////////////////////
class sales
{
private:
	enum { MONTHS = 3 };
	float salesArr[MONTHS];
public:
	void getdata();
	void putdata()const;
};
//---------------------------------------------------------
void sales::getdata()
{
	cout << "������� ����� ������ �� 3 ������:\n ";
	for(int j = 0; j < MONTHS; j++)
	{
		cout << " ����� " << j + 1 << ":";
		cin >> salesArr[j];
	}
}
//---------------------------------------------------------
void sales::putdata()const
{
	for(int j = 0; j < MONTHS; j++)
	{
		cout << "\n������� �� �����" << j + 1 << ":";
		cout << salesArr[j];
	}
}
///////////////////////////////////////////////////////////
class book :private publication, private sales
{
private:
	int pages;
public:
	void getdata()
	{
		publication::getdata();
		cout << "������� ����� �������:";cin >> pages;
		sales::getdata();
	}
	void putdata()const
	{
		publication::putdata();
		cout << "\n�������:" << pages;
		sales::putdata();
	}
};
///////////////////////////////////////////////////////////
class tape :private publication, private sales
{
private:
	float time;
public:
	void getdata()
	{
		publication::getdata();
		cout << "������� ����� ��������:";cin >> time;
		sales::getdata();
	}
	void putdata()const
	{
		publication::putdata();
		cout << "\n����� ��������:" << time;
		sales::putdata();
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	book book1;         // ���������� ����������
	tape tape1;

	book1.getdata();    // �������� �������� � �����������
	tape1.getdata();

	book1.putdata();    // ������� �������� � �����������
	tape1.putdata();
	cout << endl;

	return 0;
}

