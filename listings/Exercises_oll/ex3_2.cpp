// ex3_2.cpp
// ��������� ����������  � ������� � �������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	int response;
	double  temper;

	cout << "\n������� 1 ��� �������� �� ���������� � ������� �������,"
		<< "\n 2 ��� ��������� ��������:";
	cin >> response;

	if(response == 1)
	{
		cout << "������� ����������� (� �����������):";
		cin >> temper;
		cout << "� �������� ������� ��� " << 5.0 / 9.0 * (temper - 32.0);
	}
	else
	{
		cout << "������� ����������� � ��. �������:";
		cin >> temper;
		cout << "� �������� ���������� ��� " << 9.0 / 5.0 * temper + 32.0;
	}
	cout << endl;

	return 0;
}
