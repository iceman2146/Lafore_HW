// adswitch.cpp
// ��������������� ���� � �������������� switch
#include <iostream>
using namespace std;
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
		dir = getche();        // ���� ����������
		switch(dir)            // switch c ����������� dir
		{
		case 'n': y--; break;  // �������� �� �����
		case 's': y++; break;  // �������� �� ��
		case 'e': x++; break;  // �������� �� ������
		case 'w': x--; break;  // �������� �� �����
		case '\r': cout << "�����...\n"; break; // ������� Enter
		default: cout << "���������� ���\n";    // ������� ������ ������
		}                      // ����� switch
	}                          // ����� while

	return 0;
}                              // ����� main() 
