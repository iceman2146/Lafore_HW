// increm.cpp
// ���������� �������� �����������������
#include <iostream>
using namespace std;

int main()
{
	int count = 10;

	cout << "count = " << count   << endl; // ����� ����� 10
	cout << "count = " << ++count << endl; // ����� ����� 11 (���������� �����)
	cout << "count = " << count   << endl; // ����� ����� 11
	cout << "count = " << count++ << endl; // ����� ����� 11 (����������� �����)
	cout << "count = " << count   << endl; // ����� ����� 12

	return 0;
}
