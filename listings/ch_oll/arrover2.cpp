// arrover2.cpp
// ������������ �������� ����������� �������, ������������
// ���� ������� ��� �������������
// ������������ ����� ������� ��� ��������� � ��������� ��������
#include <iostream>
using namespace std;
#include <process.h>    // ��� ������� exit
const int LIMIT = 100;  // ������ �������
///////////////////////////////////////////////////////////
class safearray
{
private:
	int arr[LIMIT];
public:
	// �������� ��������, ��� ������� ���������� ������!
	int& access(int n)
	{
		if(n < 0 || n >= LIMIT)
		{ 
			cout << "\n��������� ������!"; exit(1); 
		}
		return arr[n];
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	safearray sa1;

	// ������ �������� ���������
	for(int j = 0; j < LIMIT; j++)
		sa1.access(j) = j * 10;   // ���������� ������� ����� �� ����� =

	// ���������� ��������
	for(j = 0; j < LIMIT; j++)
	{
		int temp = sa1.access(j); // ���������� ������� ������ �� ����� =
		cout << "������� " << j << " ����� " << temp << endl;
	}

	return 0;
}