// retref.cpp
// ����������� �������� �� ������
#include <iostream>
using namespace std;
int x;					// ���������� ����������
int& setx();					// �������� �������

int main()
{								// ������������ �������� x ���
	setx() = 92;	// ������ ������ ������� �����
	cout << "x =" << x << endl;	// ����� ������ �������� x

	return 0;
}
//--------------------------------------------------------
int& setx()
{
	return x;					// ���������� ��������, ������� ����� ��������
}
