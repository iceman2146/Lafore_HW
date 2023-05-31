// wdcount.cpp
// ������� ����� ���� � ����������� � �������������� ������������
#include <iostream>
using namespace std;
#include <conio.h>					// ��� getche()
enum itsaWord { NO, YES };			// NO = 0, YES = 1

int main()
{
	system("chcp 1251 > nul");

	itsaWord isWord = NO;			// isWord ����� YES, �����
				// �������� �����, � NO, ����� �������� �������
	char ch = 'a';					// ���������� ������� � ����������
	int wordcount = 0;				// ����� ����
	cout << "������� �����������: \n";

	do {
		ch = getche();              // ���� �������
		if(ch == ' ' || ch == '\r') // ���� ������ ������,
		{
			if(isWord == YES)       // � �� ����� ��������� �����,
			{                       // ������, ����� �����������
				wordcount++;        // ���� �����
				isWord = NO;        // ����� �����
			}
		}                           // � ��������� ������
		else                        // ���� ����� ������������
			if(isWord == NO)        // ���� ������� ���� �����,
				isWord = YES;       // �� ������������� ����
	} while(ch != '\r');            // ����� �� ������� Enter

	cout << "\n---����� ����: " << wordcount << "---\n";

	return 0;
}
