// smallobj.cpp
// ������������� ������� ��������� ������
#include <iostream>
using namespace std;
////////////////////////////////////////////////////
class smallobj			// ����������� ������
{
private:
	int somedata;		// ���� ������
public:
	void setdata(int d) // ����� ������, ���������� �������� ����
	{ 
		somedata = d; 
	}
	void showdata()     // ����� ������, ������������ �������� ����
	{ 
		cout << "�������� ���� ����� " << somedata << endl;
	}
};
//////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	smallobj s1, s2;	// ����������� ���� �������� ������ smallobj
	s1.setdata(1066);	// ������ ������ setdata()
	s2.setdata(1776);
	s1.showdata();		// ������ ������ showdata()
	s2. showdata();

	return 0;
}
