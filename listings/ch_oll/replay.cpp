// replay.cpp
// ����������� � ����� �� ����� ����������, ��������� �������������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	int age[4];

	for(int j = 0; j < 4; j++)
	{
		cout << "������� �������: ";
		cin >> age[j];
	}

	for(j = 0; j < 4; j++)
		cout << "�� �����: " << age[j] << endl;

	return 0;
}
