// ichar.cpp
// ������������ �������� ����
#include <fstream>               // ��� �������� �������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	char ch;                     // ������ ��� ����������
	ifstream infile("TEST.TXT"); // ������� ����
	while(infile)                // ������ �� EOF ��� ������
	{
		infile.get(ch);          // ������� ������
		cout << ch;              // � ������� ���
	}
	cout << endl;

	return 0;
}
