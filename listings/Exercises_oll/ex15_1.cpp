// ex15_1.cpp
// ��� float �������� � �������, ����������� �������� sort()
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	int j = 0, k;
	char ch;
	float fpn, farr[100];

	do {
		cout << "������� ����� � ������� � ��������� �������:";
		cin >> fpn;
		farr[j++] = fpn;
		cout << "����������('y' ��� 'n'):";
		cin >> ch;
	}while(ch == 'y');

	sort(farr, farr + j);

	for(k = 0; k < j; k++)
		cout << farr[k] << ", ";
	cout << endl;

	return 0;
}
