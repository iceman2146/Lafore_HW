// ptrstr.cpp
// ����� ������, ������������ ����� ���������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	void dispstr(char*);  // �������� �������
	char str[] = "� ������������ ������ ���� ��������� �����.";

	dispstr(str);

	return 0;
}
///////////////////////////////////////////////////////////
void dispstr(char* ps)
{
	while(*ps)            // ���� �� �������� ����� ������
		cout << *ps++;    // ����� ����������� �������� �� �� �����
	cout << endl;
}
