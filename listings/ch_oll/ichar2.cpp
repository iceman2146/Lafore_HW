// ichar2.cpp
// �������� ���� ��������
#include <fstream>               // ��� �������� �������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	ifstream infile("TEST.TXT"); // ������� ������� ����

	cout << infile.rdbuf();      // �������� ��� ����� � cout
	cout << endl;

	return 0;
}
