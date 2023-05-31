// ex10_3.cpp
// ����������� ������ ���������� �� ������
#include <iostream>
#include <cstring>                  // ��� strcmp() � �.�.
using namespace std;		        
const int DAYS = 7;                 // ����� ���������� �� ������

int main()
{
	system("chcp 1251 > nul");

	void bsort(char**, int);        // ��������

	// ������ ���������� �� char
	char*arrptrs[DAYS] = {"����������� ", "�����������", "������� ",
		"����� ", "������� ", "������� ", "������� " };

	cout << "\n���������������:\n ";
	for(int j = 0; j < DAYS; j++)   // ������� ��������������� ������
		cout << *(arrptrs + j) << endl;

	bsort(arrptrs, DAYS);           // ����������� ������
	cout << "\n�������������:\n ";

	for(j = 0; j < DAYS; j++)       // ������� ������������� ������
		cout << *(arrptrs + j) << endl;

	return 0;
}
//---------------------------------------------------------
void bsort(char**pp, int n)         // ����������� ��������� �� ������
{								    
	void order(char**, char**);     // ��������
	int j, k;                       // ������� �������
	for(j = 0; j < n - 1; j++)      // ������� ����
		for(k = j + 1; k < n; k++)  // ���������� ����
			order(pp + j, pp + k);  // ����������� ����������
	                                // ����������
}
//---------------------------------------------------------
void order(char**pp1, char**pp2)    // ��������� ��� ���������
{                                   // ���� � ������ ������ ������
	if(strcmp(*pp1, *pp2) > 0)      // ��� �� ������
	{
		char*tempptr =*pp1;         // �������� ���������
		*pp1 =*pp2;
		*pp2 = tempptr;
	}
}
