// blanksin.cpp
// ���� ������ � ���������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	const int MAX = 80; // ������������ ����� ������
	char str[MAX];      // ���� ������

	cout << "\n������� ������: ";
	cin.get(str, MAX);
	cout << "�� �����: " << str << endl;

	return 0;
}
