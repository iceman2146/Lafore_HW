// advenor.cpp
// ���������� �������� ����������� ���
#include <iostream>
using namespace std;
#include <process.h>	// ��� exit()
#include <conio.h>	// ��� getche()
int main()
{
	system("chcp 1251 > nul");

	char dir = 'a';
	int x = 10, y = 10;

	while(dir != '\r')         // ����� ��� ������� Enter
	{
		cout << "\n\n���� ����������: " << x << ", " << y;
		if(x < 5 || x > 15)    // ���� x ������ 5 ��� ������ 15
			cout << "\n��������� - �������!";
		cout << "\n�������� ����������� (n, s, e, w): ";
		dir = getche();        // ����� �����������
		switch(dir)
		{
		case 'n': y--; break;  // ���������� ���������
		case 's': y++; break;
		case 'e': x++; break;
		case 'w': x--; break;
		}                      // ����� switch
	}                          // ����� while

	return 0;
}                              // ����� main()
