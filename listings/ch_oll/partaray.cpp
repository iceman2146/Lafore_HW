// partaray.cpp
// ������ �� ��������
#include <iostream>
using namespace std;
const int SIZE = 4;
///////////////////////////////////////////////////////////
struct part
{
	int modelnumber;
	int partnumber;
	float cost;
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	int n;
	part apart[SIZE];

	for(n = 0; n < SIZE; n++)
	{
		cout << endl;
		cout << "������� ����� ������: ";
		cin >> apart[n].modelnumber;
		cout << "������� ����� �����: ";
		cin >> apart[n].partnumber;
		cout << "������� ���������: ";
		cin >> apart[n].cost;
	}
	cout << endl;

	for(n = 0; n < SIZE; n++)
	{
		cout << "������ " << apart[n].modelnumber;
		cout << "  �����  " << apart[n].partnumber;
		cout << "  ���������  " << apart[n].cost << endl;
	}

	return 0;
}
