// englio.cpp
// ������������� �������� << � >> 
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance                       // ����� ���������� ����������
{
private:
	int feet;
	float inches;
public:
	Distance() :feet(0), inches(0.0) // ����������� (0 ���.)
	{  }

	// ����������� (2 ���������)
	Distance(int ft, float in) : feet(ft), inches(in)
	{  }
	friend istream& operator>>(istream& s, Distance& d);
	friend ostream& operator<<(ostream& s, Distance& d);
};
//---------------------------------------------------------
istream& operator>>(istream& s, Distance& d)   // �������� �������� 
	                                           // �� ������������
{
	cout << "\n������� ����: ";  s >> d.feet;  // ������������
	cout << "������� �����: ";  s >> d.inches; // �������������
	return s;                                  // �������� >>
}
//---------------------------------------------------------
ostream& operator<<(ostream& s, Distance& d)   // ������� ����������
{
	s << d.feet << "\'-" << d.inches << '\"';  // ������������
	return s;                                  // ������������� <<
}
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Distance dist1, dist2;     // ����������� ����������
	Distance dist3(11, 6.25);  // �����������, ������������� dist3
	cout << "\n������� ��� �������� ����������:";
	cin >> dist1 >> dist2;     // �������� �������� �� ������������

	// ����� ����������
	cout << "\ndist1 = " << dist1 << "\ndist2 = " << dist2;
	cout << "\ndist3 = " << dist3 << endl;

	return 0;
}
