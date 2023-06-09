// ex8_1.cpp
// ������������� �������� '-' ������� �������� ����������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance // ����� ���������� ����������
{
private:
	int feet;
	float inches;
public:            
	// ����������� ��� ����������
	Distance(): feet(0), inches(0.0)
	{ }                

	// ����������� (��� ���������)
	Distance(int ft, float in):feet(ft), inches(in)
	{ }

	void getdist()          // �������� ���������� �� ������������
	{
		cout << "\n������� ����� �����:";cin >> feet;
		cout << "����� ������:";cin >> inches;
	}

	void showdist()         // ������� ����������
	{ cout << feet << "\'-" << inches << '\"'; }

	Distance operator+(Distance);// ���������� ��� ����������
	Distance operator-(Distance);// �������� ��� ����������
};
//---------------------------------------------------------
// ���������� d2 � ����������
Distance Distance::operator+(Distance d2)// ������� �����
{
	int f = feet +d2.feet;        // ������� ����
	float i = inches +d2.inches;  // ������� �����
	if(i >= 12.0)           // ���� ����� ������ ��������� 12.0,
	{                       // ��������� ����� ������
		i -= 12.0;          // �� 12.0 � 
		f++;                // ��������� ����� ����� � 1
	}                       // ������� ��������� 
	return Distance(f, i);  // �������� ����������, ������ �����
}
//---------------------------------------------------------
// ��������� d2 �� ����������
Distance Distance::operator-(Distance d2) // ������� ��������
{
	int f = feet - d2.feet;               // �������� �����
	float i = inches - d2.inches;         // �������� ������
	if(i < 0)         // ���� ����� ������ ������ 0,
	{                 // ��������� �� ���������� �� 
		i += 12.0;    // 12.0 � 
		f--;          // ��������� ����� ����� �� 1
	}                      // ������� ��������� ����������,
	return Distance(f, i); // ������ ��������
}
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Distance dist1, dist3;  // ���������� ����������
	dist1.getdist();        // �������� dist1 �� ������������
	Distance dist2(3, 6.25);// ����������, ���������������� dist2

	dist3 = dist1 - dist2;  // ��������

	// ������� ��� ����������
	cout << "\ndist1 ="; dist1.showdist();
	cout << "\ndist2 ="; dist2.showdist();
	cout << "\ndist3 ="; dist3.showdist();
	cout << endl;

	return 0;
}
