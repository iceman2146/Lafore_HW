// passref.cpp
// �������� ��������� �� ������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	void centimize(double &); // �������� �������

	double  var = 10.0;       // �������� ���������� var ����� 10 (������)
	cout << "var = " << var << "������" << endl;

	centimize(var);           // ��������� ����� � ����������
	cout << "var = " << var << "�����������" << endl;

	return 0;
}
///////////////////////////////////////////////////////////
void centimize(double & v)
{
	v *= 2.54;                // v � ��� �� �� �����, ��� � var
}
