// sqrt.cpp
// ������������� ������������ ������� sqrt()
#include <iostream> // ��� cout � �. �.
#include <cmath>	// ��� sqrt()
using namespace std;   

int main()
{
	system("chcp 1251 > nul");

	double  number, answer;     // ��������� ���� double  ��� ������� sqrt()
	cout << "������� �����: ";
	cin >> number;              // ���� �����
	answer = sqrt(number);      // ���������� �����
	cout << "���������� ������ ����� " << answer << endl; // ����� ����������

	return 0;
}
