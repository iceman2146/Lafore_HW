// passptr.cpp
// �������� ��������� �� ���������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	void centimize(double *); // �������� �������

	double  var = 10.0;       // �������� ���������� var ����� 10 (������)
	cout << "var = " << var << "������" << endl;

	centimize(&var);          // ��������� ����� � ����������
	cout << "var = " << var << "�����������" << endl;

	return 0;
}
///////////////////////////////////////////////////////////
void centimize(double * ptrd)
{
	*ptrd *= 2.54;            // *ptrd � ��� �� �� �����, ��� � var
}
