// englref.cpp
// ������������� ���������, ������������� ���������� new
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance
{
private:
	int feet;
	float inches;
public:
	void getdist()		// ��������� ����������
	{
		cout << "\n������� ����: "; cin >> feet;
		cout << "������� �����: "; cin >> inches;
	}
	void showdist()		// ����� ����������
	{ 
		cout << feet << "\'-" << inches << '\"';
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Distance& dist = *(new Distance); // ������� ������ ���� Distance
	dist.getdist();		// ������ � ������ ������ ������������ ����� �������� "."
	dist.showdist();
	cout << endl;

	return 0;
}
