// convert.cpp
// ������������� �������� �������� �������� ��������
#include <iostream>
using namespace std;
float lbstokg(float);	// �������� �������

int main()	
{
	system("chcp 1251 > nul");

	float lbs, kgs;
	cout << "\n������� ��� � ������: ";
	cin >> lbs;
	kgs = lbstokg(lbs);
	cout << "��� � ����������� ����� " << kgs << endl;

	return 0;
}
//--------------------------------------------------------
// ������� lbstokg()
// ��������� ����� � ����������
float lbstokg(float pounds)
{
	float kilograms = 0.453592 * pounds;
	return kilograms;
}
