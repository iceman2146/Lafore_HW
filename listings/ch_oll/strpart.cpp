// strpart.cpp
// ������������� ����� � ������
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
class part
{

private:
	char partname[30];     // ��������
	int partnumber;        // �����
	double  cost;          // ����
public:
	void setpart(char pname[], int pn, double  c)
	{
		strcpy(partname, pname);
		partnumber = pn;
		cost = c;
	}
	void showpart()
	{
		cout << "\n�������� =" << partname;
		cout << ", ����� =" << partnumber;
		cout << ", ���� =$" << cost;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	part part1, part2;

	part1.setpart("�����", 4473, 217.55);
	part2.setpart("�������", 9924, 419.25);

	cout << "\n������ ������: "; part1.showpart();
	cout << "\n������ ������: "; part2.showpart();
	cout << endl;

	return 0;
}
