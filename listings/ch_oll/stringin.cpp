// stringin.cpp
// ������� ���������� ������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	const int MAX = 80;                 // ������������ ������ ������
	char str[MAX];                      // ���� ������

	cout << "������� ������: ";			// ���� ������
	cin >> str;
	cout << "�� �����: " << str << endl;// ����� ����������

	return 0;
}
