// newintro.cpp
// ������������ � ���������� new
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	char* str = "������ ������ ����� ����� �� ����.";
	int len = strlen(str);           // �������� ����� ����� ������
	char* ptr;                       // ��������� ����������
	ptr = new char[len +1];          // ������� ������
	strcpy(ptr, str);                // ��������� ������ str � ptr
	cout << "ptr = " << ptr << endl; // ������� ��� ���������� � ptr
	delete[] ptr;                    // ��������� ���������� ������

	return 0;
}
