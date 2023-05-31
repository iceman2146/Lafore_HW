// find_if.cpp
// ���� � ������� ���� string ������ ��������� ����� ��������
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//---------------------------------------------------------
bool isDon(string name)      // ���������� true, ���� name == "�������"
{
	return name == "�������";
}
//---------------------------------------------------------
string names[] = { "������", "�������", "�����", "�������", "������", "��������" };

int main()
{
	system("chcp 1251 > nul");

	string* ptr;
	ptr = find_if(names, names + 5, isDon);

	if(ptr == names + 5)
		cout << "������� ��� � ������.\n";
	else
		cout << "������� ������� � ������� "
		<< (ptr - names)
		<< " � ������.\n";

	return 0;
}
