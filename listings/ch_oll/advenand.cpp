// advenand.cpp
// ���������� �������� ����������� �
#include <iostream>
using namespace std;
#include <process.h>         // ��� exit()
#include <conio.h>           // ��� getche()
int main()
{
	system("chcp 1251 > nul");

	char dir = 'a';
	int x = 10, y = 10;

	while(dir != '\r')
	{
		cout << "\n���� ����������: " << x << ", " << y;
		cout << "\n�������� ����������� (n, s, e, w): ";
		dir = getche();          // ���� �����������
		switch(dir)
		{
		case 'n': y--; break;    // ���������� ���������
		case 's': y++; break;
		case 'e': x++; break;
		case 'w': x--; break;
		}
		if(x == 7 && y == 11)    // ���� x ����� 7 � y ����� 11
		{
			cout << "\n�� ����� ���������!\n";
			exit(0);             // ����� �� ���������
		}
	}                            // ����� while

	return 0;
}                                // ����� main()
