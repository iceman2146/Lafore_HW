// ex11_1.cpp
// ����� ���������� � �����������
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
	virtual void getdata()
	{
		cout << "\n������� ���������:";cin >> title;
		cout << "������� ����:";cin >> price;
	}
	virtual void putdata()
	{
		cout << "\n \n���������:" << title;
		cout << "\n����:" << price;
	}
};
///////////////////////////////////////////////////////////
class book :public publication
{
private:
	int pages;
public:
	void getdata()
	{
		publication::getdata();
		cout << "������� ����� �������:";cin >> pages;
	}
	void putdata()
	{
		publication::putdata();
		cout << "\n�������:" << pages;
	}
};
///////////////////////////////////////////////////////////
class tape :public publication
{
private:
	float time;
public:
	void getdata()
	{
		publication::getdata();
		cout << "������� ����� ��������:";cin >> time;
	}
	void putdata()
	{
		publication::putdata();
		cout << "\n����� ��������:" << time;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	publication*pubarr[100];  // ������ ���������� �� ����������
	int n = 0;                // ����� ���������� � �������
	char choice;              // ����� ������������
	do {
		cout << "\n������� ������ ��� ����� ��� ������ (b/t)?";
		cin >> choice;
		if(choice == 'b')            // ������� ������ ������
			pubarr[n] = new book;    // ������� � ������
		else                         // ������� ������ �������
			pubarr[n] = new tape;    // ������� � ������
		pubarr[n++]->getdata();      // �������� ������ �� �������
		cout << "���������� (y/n)?"; // ��� ����������?
		cin >> choice;				 
	}								 
	while(choice == 'y');            // ����, ���� �� ����� ����� 'y'
	for(int j = 0; j < n; j++)       // ���� �� ���� ��������
		pubarr[j]->putdata();        // ������� ������ � ����������
	cout << endl;

	return 0;
}
