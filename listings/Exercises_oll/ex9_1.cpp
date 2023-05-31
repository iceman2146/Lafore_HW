// ex9_1.cpp
// ����� ���������� � ����������� �� ����
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class publication // ������� �����
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
class book :private publication // ����������� �����
{
private:
	int pages;
public:
	void getdata()
	{
		publication::getdata();
		cout << "������� ����� �������:";cin >> pages;
	}
	void putdata()const
	{
		publication::putdata();
		cout << "\n�������:" << pages;
	}
};
///////////////////////////////////////////////////////////
class tape :private publication // ����������� �����
{
private:
	float time;
public:
	void getdata()
	{
		publication::getdata();
		cout << "������� ����� ��������:";cin >> time;
	}
	void putdata()const
	{
		publication::putdata();
		cout << "\n����� ��������:" << time;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	book book1;                 // ���������� ����������
	tape tape1;

	book1.getdata();            // �������� ������ � ���
	tape1.getdata();

	book1.putdata();            // ������� ������ � ���
	tape1.putdata();
	cout << endl;

	return 0;
}
