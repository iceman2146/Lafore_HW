// tablearg.cpp
// ������������� �������� ���������� � �������
#include <iostream>
using namespace std;
void repchar(char, int);	   // �������� �������

int main()
{
	system("chcp 1251 > nul");

	repchar('-', 43);          // ����� ������� 
	cout << "��� ������ ��������" << endl;
	repchar('=', 23);	       // ����� �������
	cout << "char	-128...127" << endl
		<< "short	-32 768...32 767" << endl
		<< "int	��������-��������� " << endl
		<< "double  -2 147 483 648...2 147 483 647" << endl;
	repchar('-', 43);          // ����� ������� 

	return 0;
}
//--------------------------------------------------------
// ����������� ������� repchar()
void repchar(char ch, int n)   // ��������� �������
{
	for(int j = 0; j < n; j++) // ���� �������
		cout << ch;
	cout << endl;
}
