// divdo2.cpp
// ���������� ��������� continue
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	long dividend, divisor;
	char ch;

	do {
		cout << "������� �������: "; cin >> dividend;
		cout << "������� ��������: "; cin >> divisor;
		if(divisor == 0)						// ��� ������� ������� �� ����
		{
			cout << "������������ ��������!\n";	// ����� ���������
			continue;							// ������� � ������ �����
		}
		cout << "������� ����� " << dividend / divisor;
		cout << ", ������� ����� " << dividend % divisor;
		cout << "\n��� ���?(y/n):  ";
		cin >> ch;
	} while(ch != 'n');

	return 0;
}
