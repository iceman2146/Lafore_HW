// sstrfind.cpp
// ����� ��������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	string s1 = "� ���� �������� ������, � ���� ��� �����.";
	int n;

	n = s1.find("������");
	cout << "������ �������: " << n << endl;

	n = s1.find_first_of("����");
	cout << "������ �� ����: " << n << endl;

	n = s1.find_first_not_of("����������");
	cout << "������ �� ��: " << n << endl;

	return 0;
}
