// platters.cpp
// ���������� ��������� switch
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	int speed;              // �������� �������� �������������
	cout << "\n������� ����� 33, 45 ��� 78: ";
	cin >> speed;           // ���� �������� �������������

	switch(speed)           // ��������, ��������� �� ������ �������� 
	{
	case 33:              // ���� ������������ ���� 33
		cout << "������������� ������\n";
		break;
	case 45:              // ���� ������������ ���� 45
		cout << "������ ������\n";
		break;
	case 78:              // ���� ������������ ���� 78
		cout << "���������� ������\n";
		break;
	}

	return 0;
}
