// safetyin.cpp
// ��������� ������������ ������
#include <iostream>
#include <iomanip>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	const int MAX = 20;			// ������������ ������ ������
	char str[MAX];				// ���� ������

	cout << "\n������� ������: ";
	cin >> setw(MAX) >> str;	// ���� �� ����� ��� MAX ��������
	cout << "�� �����: " << str << endl;

	return 0;
}
