// inliner.cpp
// ���������� ���������� �������
#include <iostream>
using namespace std;

// ������� lbstokg()
// ��������� ����� � ����������
inline float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}
//--------------------------------------------------------
int main()
{
	system("chcp 1251 > nul");

	float lbs;
	cout << "\n������� ��� � ������: ";
	cin >> lbs;
	cout << " " << lbstokg(lbs) << endl;

	return 0;
}
