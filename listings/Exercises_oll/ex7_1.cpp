// ex7_1.cpp
// �������������� ������
#include <iostream>
#include <cstring>                 // ��� strlen()
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	void reversit(char[]);         // ��������
	const int MAX = 80;            // ������ �������
	char str[MAX];                 // ������

	cout << "\n������� ������:";   // �������� ������ ��
	cin.get(str, MAX);             // ������������
	
	reversit(str);                 // ����������� ������
	cout << "������������ ������:";
	cout << str << endl;           // � ������� ��

	return 0;
}
//---------------------------------------------------------
// reversit()
// �������, ���������������� ������, ���������� � ���������
void reversit(char s[])
{
	int len = strlen(s);           // ����� ����� ������

	// �������� ��� ������� �� ������ ��������
	for(int j = 0; j < len / 2; j++)  
	{
		char temp = s[j];          // �� �������
		s[j] = s[len � j - 1];     // �� ������ ��������
		s[len � j - 1] = temp;
	}
}