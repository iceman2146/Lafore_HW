// ex5_4.cpp
// ������� ���������� ���������� �� ���� �������� ����������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
struct Distance // ���������� ����������
{
	int feet;
	float inches;
};
///////////////////////////////////////////////////////////
Distance bigengl(Distance, Distance); // ����������
void engldisp(Distance);
int main()
{
	system("chcp 1251 > nul");

	Distance d1, d2, d3;   // ����������� ���� ����������

	// �������� ���������� d1 �� ������������
	cout << "\n������� ����� �����:";cin >> d1.feet;
	cout << "������� ����� ������:";cin >> d1.inches;

	// �������� ���������� d2 �� ������������
	cout << "\n������� ����� �����:";cin >> d2.feet;
	cout << "������� ����� ������:";cin >> d2.inches;
	d3 = bigengl(d1, d2); // d3 ������, ��� d1 � d2

	// ������� ��� ��������
	cout << "\nd1 ="; engldisp(d1);
	cout << "\nd2 ="; engldisp(d2);
	cout << "\n���������� - "; engldisp(d3);cout << endl;

	return 0;
}
//---------------------------------------------------------
// bigengl()
// ���������� ��� ��������� ���� Distance, ���������� ����������
Distance bigengl(Distance dd1, Distance dd2)
{
	if(dd1.feet > dd2.feet)      // ���� ����� ����� �����������,
		return dd1;              // ������� ��, ������� ������
	if(dd1.feet < dd2.feet)
		return dd2;
	if(dd1.inches > dd2.inches)  // ���� ����� ������
		                         // �����������,
		return dd1;              // ������� ����������
	else                         // ����� ��� dd2, ���� ������ ��������
		return dd2;
}
//---------------------------------------------------------
// engldisp()
// ������� ��������� ���� Distance � ����� � ������
void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}
