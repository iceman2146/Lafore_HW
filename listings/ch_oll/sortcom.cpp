// sortcom.cpp
// ���������� ������� ����� � ������� ���������������� ������� ����������
#include <iostream>
#include <string>                      // ��� strcmp()
#include <algorithm>
using namespace std;

// ������ �����
char* names[] = { "������", "�������", "�����",
	"�������", "������", "��������" };

bool alpha_comp(char*, char*);         // ����������

int main()
{
	system("chcp 1251 > nul");

	sort(names, names + 6, alpha_comp);// ���������� �����

	for(int j = 0; j < 6; j++)         // ����� ��������������� �����
		cout << names[j] << endl;

	return 0;
}
//---------------------------------------------------------
bool alpha_comp(char* s1, char* s2)    // ���������� true ���� s1 < s2 
{
	return (strcmp(s1, s2)< 0) ? true : false;
}
