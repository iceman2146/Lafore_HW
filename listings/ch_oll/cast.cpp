// cast.cpp
// ������ �� ��������� � ������������ �����������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	int intVar = 1500000000;                            // 1 500 000 000
	intVar = (intVar * 10) / 10;                        // ������� ������� ���������
	cout << "�������� intVar ����� " << intVar << endl; // �������� ���������

	intVar = 1500000000;                                 
	intVar = (static_cast<double>(intVar) * 10) / 10;   // ���������� � ���� double
	cout << "�������� intVar ����� " << intVar << endl; // ������ ���������
	
	return 0;
}