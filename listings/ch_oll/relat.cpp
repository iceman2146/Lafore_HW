// relat.cpp
// ���������� �������� ���������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	int numb;
	cout << "������� �����: ";
	cin >> numb;

	cout << "numb < 10 �����  " << (numb < 10)  << endl;
	cout << "numb > 10 �����  " << (numb > 10)  << endl;
	cout << "numb == 10 ����� " << (numb == 10) << endl;

	return 0;
}