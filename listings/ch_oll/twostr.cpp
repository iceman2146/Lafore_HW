// twostr.cpp
// �������� ����� ����� ������� � ����� ���������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	char str1[] = "����������� ����� ������";
	char* str2 = "����������� ����� ���������";

	cout << str1 << endl; // ������� ���� ������
	cout << str2 << endl;

	// str1++;            // ��� ������ ������
	str2++;               // � ��� �����

	cout << str2 << endl; // �������� str2 ������� ����������

	return 0;
}
