// ptrtostr.cpp
// ������ ���������� �� ������
#include <iostream>
using namespace std;
const int DAYS = 7;

int main()
{
	system("chcp 1251 > nul");

	// ������ ���������� �� ������
	char* arrptrs[DAYS] = { "�����������", "�������", "�����", "�������", "�������", "�������", "�����������" };

	for(int j = 0; j < DAYS; j++)    // ������� ��� ������
		cout << arrptrs[j] << endl;

	return 0;
}
