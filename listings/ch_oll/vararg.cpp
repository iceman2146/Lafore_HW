// vararg.cpp
// �������� ���������� � ������� � �������� ����������
#include <iostream>
using namespace std;
void repchar(char, int);	    // ���������� �������

int main()
{
	system("chcp 1251 > nul");

	char chin;
	int nin;
	cout << "������� ������: ";
	cin >> chin;
	cout << "������� ����� ���������� �������: ";
	cin >> nin;
	repchar(chin, nin);

	return 0;
}
// --------------------------------------------------------
// ����������� ������� repchar()
void repchar(char ch, int n)    // ��������� �������
{
	for(int j = 0; j < n; j++)  // ���� �������
		cout << ch;
	cout << endl;
}
