// ex6_3.cpp
// ������������� ������ ��� ������������ ������ �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class time
{
private:
	int hrs, mins, secs;
public:
	time(): hrs(0), mins(0), secs(0) // ����������� ��� ����������
	{ }

	// ����������� � ����� �����������
	time(int h, int m, int s):hrs(h), mins(m), secs(s)
	{ }

	void display()const             // ������ 11:59:59
	{ cout << hrs << ":" << mins << ":" << secs; }

	void add_time(time t1, time t2) // ������� ��� ����������
	{
		secs = t1.secs +t2.secs;    // ������� �������
		if(secs > 59)               // ���� �������,
		{ secs -= 60; mins++; }     // ��������� ������
		mins += t1.mins +t2.mins;   // ������� ������
		if(mins > 59)               // ���� ������� ����� �����,
		{ mins -= 60; hrs++; }      // ��������� ���
		hrs += t1.hrs +t2.hrs;      // ������� ����
	}
};
///////////////////////////////////////////////////////////
int main()
{
	const time time1(5, 59, 59);    // �������� � �������������
	const time time2(4, 30, 30);    // ���� ����������
	time time3;                     // ������� ��� ���� ����������
	time3.add_time(time1, time2);   // ������� ��� ����������
	cout << "time3 ="; time3.display();// ������� ���������
	cout << endl;

	return 0;
}
