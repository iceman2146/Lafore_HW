// ptrobjs.cpp
// ������ ���������� �� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person               // ����� �������
{
private:
	char name[40];         // ��� ��������
public:
	void setName()         // ��������� �����
	{
		cout << "������� ���: ";
		cin >> name;
	}
	void printName()       // ����� �����
	{
		cout << "\n  ���: " << name;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	person* persPtr[100];  // ������ ����������
	int n = 0;             // ���������� ��������� � �������
	char choice;

	do
	{
		persPtr[n] = new person; // ������� ����� ������
		persPtr[n]->setName();   // ������ ���
		n++;                              // ����������� ����������
		cout << "���������� ���� (�/�)?"; // ����������, �������� �� ����
		cin >> choice;
	}
	while(choice == '�');
	for(int j = 0; j < n; j++)
	{
		cout << "\n���������� � ������ " << j + 1;
		persPtr[j]->printName();
	}
	cout << endl;

	return 0;
}
