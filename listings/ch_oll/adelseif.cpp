// adelseif.cpp
// ��������������� ���� � ����������� else...if
#include <iostream>
using namespace std;
#include <conio.h>                // ��� getche()

int main()
{
	system("chcp 1251 > nul");

	char dir = 'a';
	int x = 10, y = 10;
	cout << "������� Enter ��� ������...\n";

	while(dir != '\r')            // ���� �� ������ ������� Enter
	{
		cout << "\n���� ����������: " << x << ", " << y;
		cout << "\n�������� ����������� (n, s, e, w): ";

		dir = getche();           // ���� �������

		if(dir == 'n')            // �������� �� �����
			y--;
		else if(dir == 's')       // �������� �� ��
			y++;
		else if(dir == 'e')       // �������� �� ������
			x++;
		else if(dir == 'w')       // �������� �� �����
			x--;
	}                             // ����� ����� while

	return 0;
}     
