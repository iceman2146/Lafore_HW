// ex5_1.cpp
// ������� ������� ������� ����������
#include <iostream>
using namespace std;
float circarea(float radius);

int main()
{
	system("chcp 1251 > nul");

	double  rad;
	cout << "\n������� ������ ����������:";
	cin >> rad;
	cout << "������� ����� " << circarea(rad) << endl;

	return 0;
}
// ---------------------------------------------------------
float circarea(float r)
{
	const float PI = 3.14159F;
	return r * r * PI;
}
