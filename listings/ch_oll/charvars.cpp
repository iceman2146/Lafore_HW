// charvars.cpp
// ���������� ���������� ��������
#include <iostream>       // ��� cout � �.�.
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	char charvar1 = 'A';  // ���������� ���������� �� ��������� 'A'
	char charvar2 = '\t'; // ���������� ���������� �� ��������� ������� ���������

	cout << charvar1;     // ����� ���������� �� �����
	cout << charvar2;     // ����� ���������� �� �����

	charvar1 = 'B';       // ������������ ������������ �������� ���������� ����������

	cout << charvar1;     // ����� ���������� �� �����
	cout << '\n';         // ������� �� ��������� ������

	return 0;
}