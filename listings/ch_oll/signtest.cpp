// signtest.cpp
// ������ �� ��������� / ������������ �����������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	int signedVar = 1500000000;				 // �������� ����������
	unsigned int unsignVar = 1500000000;     // ����������� ����������

	signedVar = (signedVar * 2) / 3;         // ����� �� ������� ���������
	unsignVar = (unsignVar * 2) / 3;         // ���������� ������ ���������

	cout << "�������� ���������� ����� "    << signedVar << endl; // ������
	cout << "����������� ���������� ����� " << unsignVar << endl; // ���������

	return 0;
}