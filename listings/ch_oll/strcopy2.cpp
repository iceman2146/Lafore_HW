// strcopy2.cpp
// ����������� ������ �������� strcpy()
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	char str1[] = "������� ����� �� ���, �������� ����� ����!";
	const int MAX = 80;   // ������������ ����� ������
	char str2[MAX];       // ���� ������

	strcpy(str2, str1);   // �������� ������
	cout << str2 << endl; // � ���������� ���������

	return 0;
}
