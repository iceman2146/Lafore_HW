// frisq.cpp
// ������������� ��� Distance ������� square()
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance                        // ����� ���������� ����
{
private:
	int feet;
	float inches; 
public:                             // ����� ���������� ����
	Distance() : feet(0), inches(0.0) // ����������� (��� ����������)
	{  }
	// ����������� (2 ���������)
	Distance(int ft, float in) : feet(ft), inches(in)  
	{  }
	void showdist()                   // ������� ����������
	{ 
		cout << feet << "\'-" << inches << '\"'; 
	}
	friend float square(Distance);    // ������������� �-���
};
//---------------------------------------------------------
float square(Distance d)                 // ������� �������
{                                        // ����������
	float fltfeet = d.feet + d.inches / 12;// �������������� � float 
	float feetsqrd = fltfeet * fltfeet;    // ��������� �������
	return feetsqrd;                       // ������� ���������� ����
}
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Distance dist(3, 6.0);// ����������� � ����� ����������� (3'-6")
	float sqft;

	sqft = square(dist);                   // ������� ������� dist
	// ������� ���������� � ��� �������
	cout << "\n���������� = "; dist.showdist();
	cout << "\n������� �����. = " << sqft << " square feet\n";

	return 0;
}
