// badalloc.cpp
// ������������ ���������� bad_alloc 
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	const unsigned long SIZE = 10000; // ����� ������
	char* ptr;                // ��������� �� ����� � ������

	try
	{
		ptr = new char[SIZE]; // ���������� � ������ SIZE ����
	}
	catch(bad_alloc)          // ���������� ����������
	{
		cout << "\n ���������� bad_alloc: ���������� ���������� ������ � ������.\n";
		return (1);
	}

	delete[] ptr;             // ���������� ������
	cout << "\n������ ������������ ��� �����.\n";

	return 0;
}
