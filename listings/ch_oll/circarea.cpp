// circarea.cpp
// ������ � ����������� ������������� ����
#include <iostream>									// ��� cout � �.�.
using namespace std;
int main()
{	
	system("chcp 1251 > nul");

	float rad;										// ���������� ������������� ����
	const float PI = 3.14159F;						// ������������ ���������
	cout << "������� ������ ����������: ";			// ������
	cin >> rad;										// ��������� �������
	float area = PI * rad * rad;					// ���������� ������� �����
	cout << "������� ����� ����� " << area << endl;	// ����� ���������� �� �����
	return 0;
}