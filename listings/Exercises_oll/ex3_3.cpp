// ex3_3.cpp
// ������� ����� �� ��������� ����
#include <iostream>
using namespace std;
#include <conio.h> // ��� getche()

int main()
{
	system("chcp 1251 > nul");

	char ch;
	unsigned long total = 0;      // � ���� ���������� � �����
	cout << "\n������� �����:";
	while((ch = getche())!='\r')  // ����� �� ������� Enter
		total = total*10+ch-'0';  // ��������� ����� � total*10
	cout << "\n���������� �����:" << total << endl;

	return 0;
}
