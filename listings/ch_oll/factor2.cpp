// factor2.cpp
// ������� ���������� ����� � ������� ��������
#include <iostream>
using namespace std;
unsigned long factfunc(unsigned long);// ��������
int main()
{
	system("chcp 1251 > nul");

	int n;							  // �����, �������� �������������
	unsigned long fact;			      // ��������� ����� �����
	cout << "������� ����� ����� :";
	cin >> n;
	fact = factfunc(n);
	cout << "��������� ����� " << n << "����� " << fact << endl;

	return 0;
}
//---------------- ������� factfunc()--------
// ���������� ������������ ��������� �����
unsigned long factfunc(unsigned long n)
{
	if(n > 1)
		return n * factfunc(n - 1);	  // ����� ����� ����
	else
		return 1;
}
