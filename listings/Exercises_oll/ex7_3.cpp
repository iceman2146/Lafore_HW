// ex7_3.cpp
// ������� ������� �������� ����, ��������� �������������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance // �����  ���������� ����������
{
private:
	int feet;
	float inches;
public:

	Distance()                // ����������� (��� ����������)
	{ feet = 0; inches = 0; }

	Distance(int ft, float in)// ����������� (2 ���������)
	{ feet = ft; inches = in; }

	void getdist()            // �������� ���������� �� ������������
	{
		cout << "\n������� ����:";cin >> feet;
		cout << "������� �����:";cin >> inches;
	}

	void showdist()           // ����� ����������
	{ cout << feet << "\'-" << inches << '\"'; }

	void add_dist(Distance, Distance);// ����������
	void div_dist(Distance, int);
};
//---------------------------------------------------------
// �������� ���������� d2 � d3
void Distance::add_dist(Distance d2, Distance d3)
{
	inches = d2.inches +d3.inches;// ������� �����
	feet = 0;                     // (��� ���������� ��������)
	if(inches >= 12.0)            // ���� ����� ��������� 12.0,
	{                             // ��������� ����� ������
		inches -= 12.0;           // �� 12.0 �
		feet++;                   // ��������� ����� �����
	}                             // �� 1
	feet += d2.feet +d3.feet;     // ������� ����
}
//---------------------------------------------------------
// ������� ������� Distance �� ����� �����
void Distance::div_dist(Distance d2, int divisor)
{
	float fltfeet = d2.feet +d2.inches/12.0;// �������������
	                                        // � ������ float
	fltfeet /= divisor;                     // ��������� �������
	feet = int(fltfeet);                    // �������� ������� �����
	inches =(fltfeet - feet)*12.0;          // �������� �������� �����
}
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Distance distarr[100];              // ������ �� 100 �������� ���� Distance
	Distance total(0, 0.0), average;    // ������ ����������
	int count = 0;        // ������� ���������� ��������� ��������
	char ch;              // ������� ������ ������������

	do {
		cout << "\n������� ���������� ";// �������� ��������
		distarr[count++].getdist();     // �� ���������, �������
		cout << "\n���������� (y/n)?";  // �� � ������
		cin >> ch;
	}while(ch != 'n');
	for(int j = 0; j < count; j++)      // ������� ��� ����������
		total.add_dist(total, distarr[j]); // � total
	average.div_dist(total, count);     // ��������� �� �����
	cout << "\n�������:";               // ������� ������� ��������
	average.showdist();
	cout << endl;

	return 0;
}
