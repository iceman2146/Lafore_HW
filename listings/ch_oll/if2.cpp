// if2.cpp
// ������������� ���������� ���������� � ���� ����� if
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	int x;
	cout << "������� �����: ";
	cin >> x;
	if(x > 100)
	{
		cout << "����� " << x;
		cout << " ������, ��� 100\n";
	}
	return 0;
}
