// explicit.cpp
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance			// ����� ��� ���������� ��� �����
{
private:
	const float MTF; 	// ����� � �����
	int feet;
	float inches;
public: 				// ����������� ��� ����������
	Distance() : feet(0), inches(0.0), MTF(3.280833F)
	{ }					// ����� (EXPLICIT) ����������� � ����� ����������
	explicit Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters;
		feet = int(fltfeet);
		inches = 12 * (fltfeet - feet);
	}
	void showdist()		// �������� ����������
	{ cout << feet << "\'-" << inches << '\"'; }
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	void fancyDist(Distance); 	// ����������
	Distance  dist1(2.35F); 	// ����������� � 1 ����������
		// ��������������� ����� � ����������
	// Distance dist1 = 2.35F;    // ������, ���� ctor �������� �����(EXPLICIT)
	cout << "\ndist1 = "; dist1.showdist();

	float mtrs = 3.0F;
	cout << "\nDist1 ";
	// fancyDist(mtrs);		// ������, ���� ctor �������� �����(EXPLICIT)

	return 0;
}
///////////////////////////////////////////////////////////
void fancyDist(Distance d)
{
	cout << "(� ����� � ������) = ";
	d.showdist();
	cout << endl;
}
