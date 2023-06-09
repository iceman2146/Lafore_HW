// diskfun.cpp
// ������ �� ����� � ������ ���������� ��������
#include <fstream>      // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person            // ����� person
{
protected:
	char name[80];      // ��� ��������
	int age;            // ��� �������
public:
	void getdata()      // �������� ������ � ��������
	{
		cout << "\n  ������� ���: "; cin >> name;
		cout << "  ������� �������: "; cin >> age;
	}
	void showData()     // ����� ������ � ��������
	{
		cout << "\n  ���: " << name;
		cout << "\n  �������: " << age;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	char ch;
	person pers;          // ������� ������ person
	fstream file;         // ������� �������/�������� ����

	// ������� ��� ��������
	file.open("GROUP.DAT", ios::app | ios::out |
		ios::in | ios::binary);
	do                    // ������ �� ������������ - � ����
	{
		cout << "\n������� ������ � ��������:";
		pers.getdata();   // �������� ������

		// �������� �� � ����
		file.write(reinterpret_cast<char*>(&pers), sizeof(pers));
		cout << "���������� ���� (y/n)? ";
		cin >> ch;
	}
	while(ch == 'y');     // ����� �� 'n'
	file.seekg(0);        // ��������� ��������� �� ������ �����

	// ������� ������ � ������ ��������
	file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	while(!file.eof())    // ����� �� EOF
	{
		cout << "\n�������:";// ������� ������
		pers.showData();     // ������� ������ � ���������
		file.read(reinterpret_cast<char*>(&pers), sizeof(pers));  
	}
	cout << endl;

	return 0;
}
