// ex10_1.cpp
// ������� ������� �����, ��������� �������������
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	float flarr[100]; // ������ �����
	char ch;          // ����� ������������
	int num = 0;      // ������� ���������� ��������� �����

	do
	{
		cout << "������� �����:";// �������� �����
		cin >>*(flarr + num++);  // ���� �� ����� ������ 'n'
		cout << "����������(y/n)?";
		cin >> ch;
	}
	while(ch != 'n');

	float total = 0.0;           // ����� ���������� � 0
	for(int k = 0; k < num; k++) // ���������� ����� � �����
		total += *(flarr + k);
	float average = total / num; // ����� � ����� ��������
	cout << "������� ����� " << average << endl;

	return 0;
}
