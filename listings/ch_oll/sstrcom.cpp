// sstrcom.cpp
// ��������� �����
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	string aName = "����";
	string userName;

	cout << "������� ���� ���: ";
	cin >> userName;
	if(userName == aName)
		cout << "������, ����\n";
	else if(userName < aName)
		cout << "���� ��� ���� �� ����� ����\n";
	else
		cout << "���� ��� ���� ����� ����� ����\n";

	int n = userName.compare(0, 2, aName, 0, 2);
	cout << "������ ��� ����� ������ ����� ";
	if(n == 0)
		cout << "��������� ";
	else if(n < 0)
		cout << "���� �� ";
	else
		cout << "���� ����� ";
	cout << aName.substr(0, 2) << endl;

	return 0;
} 