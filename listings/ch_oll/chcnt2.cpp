// chcnt2.cpp
// ������� ����� ���� � �������� � ������
#include <iostream>
using namespace std;
#include <conio.h>					 // ��� getche()

int main()
{
	system("chcp 1251 > nul");

	int chcount = 0;
	int wdcount = 1;				 // ������ ����� ����� �������
	char ch;

	while((ch = getche()) != '\r')	 // ����, ���� �� ������ ������� Enter
	{
		if(ch == ' ')                // ���� ������ ������,
			wdcount++;               // ���������������� ������� ����
		else                         // �����
			chcount++;               // ���������������� ����� ��������
	}								 // ����� �����������
	cout << "\n����: " << wdcount << endl;
	cout << "����: " << chcount << endl;

	return 0;
}
