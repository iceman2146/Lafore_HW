// intvars.cpp
// ������ � ����������� ������ ����
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{	
	system("chcp 1251 > nul");
	
	int var1;                   // �������� ���������� var1
	int var2;                   // �������� ���������� var2
	var1 = 20;                  // ���������� �������� ���������� var1
	var2 = var1 + 10;           // ���������� �������� ���������� var2
	cout << "var1 + 10 ����� "; // ����� ������
	cout << var2 << endl;       // ����� �������� ���������� var2
	return 0;
}