// prime.cpp
// ���������� ����� if ��� ����������� ������� �����
#include <iostream>
using namespace std;
#include <process.h>	          // ��� exit()
int main()
{
	system("chcp 1251 > nul");

	unsigned long n, j;
	cout << "������� �����: ";
	cin >> n;					  // ���� ������������ �����

	for(j = 2; j <= n / 2; j++)   // ������� �� ����� �����,
		if(n % j == 0)	          // ������� � 2; ���� �������
		{						  // �������, �� ����� �� �������
			cout << "����� �� �������: ������� �� " << j << endl;
			exit(0);	          // ����� �� ���������
		}
		cout << "����� �������� �������\n";

		return 0;
}
