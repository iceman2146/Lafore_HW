// ecopycon.cpp
// ������������� �������� � ������� ����������� ������������
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class Distance					// ����� � ���������� �������
{
private:
	int feet;
	float inches;
public:
	// ����������� ��� ����������
	Distance() : feet(0), inches(0.0)
	{ }
	// ������������ � ����� ���������� ���!
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist()				// ���� ����� �������������
	{
		cout << "\n������� ����� ����� "; cin >> feet;
		cout << "������� ����� ������: "; cin >> inches;
	}
	void showdist()				// ����� �����
	{ 
		cout << feet << "\'-" << inches << '\"';
	}
};
//////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Distance dist1(11, 6.25);	// ����������� � ����� �����������
	Distance dist2(dist1);	// ��� ������������ � ����� ����������
	Distance dist3 = dist1;

	// ����� ���� ����
	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();
	cout << "\ndist3 = "; dist3.showdist();
	cout << endl;

	return 0;
}
