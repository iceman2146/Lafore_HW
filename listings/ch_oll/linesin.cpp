// linesin.cpp
// ���� ���������� �����
#include <iostream>
using namespace std;

const int MAX = 2000; // ������������ ����� ������
char str[MAX];        // ���� ������
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	cout << "\n������� ������:\n";
	cin.get(str, MAX, '$');
	cout << "�� �����:\n" << str << endl;

	return 0;
}
