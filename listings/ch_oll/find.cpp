// find.cpp
// ����� ������ ������, �������� �������� ����� �������
#include <iostream>
#include <algorithm>              // ��� find()
using namespace std;

int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };

int main()
{
	system("chcp 1251 > nul");

	int* ptr;
	ptr = find(arr, arr + 8, 33); // ����� ������ ��������� 33
	cout << "������ ������ �� ��������� 33 ������ � ������� "
		<< (ptr - arr) << endl;

	return 0;
}
