// ex3_4.cpp
// ���������� ����������� � 4-�� ���������
#include <iostream>
using namespace std;
struct time
{
	int hrs;
	int mins;
	int secs;
};

int main()
{
	system("chcp 1251 > nul");

	double  n1, n2, ans;
	char oper, ch;
	do {
		cout << "\n������� ������ �������, ��������, ������ �������:";
		cin >> n1 >> oper >> n2;
		switch(oper)
		{
		case '+':ans = n1 + n2;break;
		case '-':ans = n1 - n2;break;
		case '*':ans = n1 * n2;break;
		case '/':ans = n1 / n2;break;
		default:ans = 0;
		}
		cout << "����� =" << ans;
		cout << "\n���������� (������� 'y' ��� 'n')?";
		cin >> ch;
	} while(ch != 'n');

	return 0;
}