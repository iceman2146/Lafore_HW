// �x2_1.cpp
// ��������� ������� � ���������� ����
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	float gallons, cufeet;
	cout << "\n������� ���������� � ��������:";
	cin >> gallons;
	cufeet = gallons / 7.481;
	cout << "�������� � ���������� �����: " << cufeet << endl;

	return 0;
}
