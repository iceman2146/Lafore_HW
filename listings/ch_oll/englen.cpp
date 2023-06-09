// englen.cpp
// ������������ � ��������� �������� ���������� ��� �����
#include <iostream>
using namespace std;
enum posneg { pos, neg };
///////////////////////////////////////////////////////////
class Distance // ����� ��� ���������� ��� �����
{
protected:     // ��������, ��� private ������������ ������
	int feet;
	float inches;
public:
	// ����������� ��� ����������
	Distance() : feet(0), inches(0.0)
	{ }
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	// ��������� �������� �� ������������
	void getdist()
	{
		cout << "\n������� ����: "; cin >> feet;
		cout << "������� �����: "; cin >> inches;
	}
	// ����� �������� �� �����
	void showdist()  const
	{ 
		cout << feet << "\'-" << inches << '\"'; 
	}
};
///////////////////////////////////////////////////////////
class DistSign : public Distance // ���������� ����� � �����
{
private:
	posneg sign;                // �������� ����� ���� pos ��� neg
public:
	// ����������� ��� ����������
	DistSign() : Distance()
	{ sign = pos; }
	// ����������� � ����� ��� ����� �����������
	DistSign(int ft, float in, posneg sg = pos) :
	Distance(ft, in)			// ����� ������������ �������� ������
	{ 
		sign = sg;				// ��������� ��������� �����
	}          
	void getdist()				// ���� ������������� �����
	{
		Distance::getdist();	// ����� ������� getdist �� �������� ������
		char ch;				// ������ �����
		cout << "������� ���� (+ ��� -): "; cin >> ch;
		sign = (ch == '+') ? pos : neg;
	}
	void showdist() const      // ����� ����������
	{
		// ����� ���� ����������, ������� ����
		cout << ((sign == pos) ? "(+)" : "(-)");
		Distance::showdist();
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	DistSign alpha;                 // ���������� ����������� �� ���������
	alpha.getdist();                // �������� ������ �� ������������

	DistSign beta(11, 6.25);        // ����������� � ����� �����������

	DistSign gamma(100, 5.5, neg);  // ����������� � ����� �����������

	// ������� ������ ��� ���� ����������
	cout << "\nA = "; alpha.showdist();
	cout << "\nB = "; beta.showdist();
	cout << "\nC = "; gamma.showdist();
	cout << endl;

	return 0;
}
