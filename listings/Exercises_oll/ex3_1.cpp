// ex3_1.cpp
// ������� ������������ �����
#include <iostream>
#include <iomanip>                 // ��� setw()
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	unsigned long n;               // �����
	cout << "\n������� �����:";
	cin >> n;                      // �������� �����
	for(int j = 1; j <= 200; j++)  // ���� �� 1 �� 200
	{
		cout << setw(5) << j*n << " "; // ������� ������������
		if(j % 10 == 0)                // ����� ������ 10 �����
			cout << endl;      		   // �������� ����� ������
	}

	return 0;
}	
