//fahren.cpp 
//���������� cin � \n 
#include <iostream> 
using namespace std;
int main() 
{
	system("chcp 1251 > nul");

	int ftemp; // ����������� �� ����������
	cout << "������� ����������� �� ����������: ";
	cin >> ftemp;
	int ctemp = (ftemp-32)*5 / 9;
	cout << "����������� no ������� ����� " << ctemp << '\n';
	return 0;
}
