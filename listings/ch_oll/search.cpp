// search.cpp
// ���� ������������������, �������� ����� �����������, �
// ������ ����������
#include <iostream>
#include <algorithm>
using namespace std;

int source[] =  { 11, 44, 33, 11, 22, 33, 11, 22, 44 };
int pattern[] = { 11, 22, 33 };

int main()
{
	system("chcp 1251 > nul");

	int* ptr;
	ptr = search(source, source + 9, pattern, pattern + 3);
	if(ptr == source + 9)                 // ���� ����� ����������
		cout << "���������� �� �������\n";
	else
		cout << "���������� � ������� " << (ptr - source) << endl;

	return 0;
}
