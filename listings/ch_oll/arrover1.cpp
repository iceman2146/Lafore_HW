// arrover1.cpp
// ������������ �������� ����������� �������, ������������
// ���� ������� ��� �������������
// ������������ ��������� ������� ��� ��������� � ��������� ��������
#include <iostream>
using namespace std;
#include <process.h>    // ��� ������� exit
const int LIMIT = 100;  // ������ �������
///////////////////////////////////////////////////////////
class safearay
{
private:
	int arr[LIMIT];
public:
	// ��������� �������� �������� �������
	void putel(int n, int elvalue)
	{
		if(n < 0 || n >= LIMIT)
		{ cout << "\n��������� ������!"; exit(1); }
		arr[n] = elvalue;
	}

	// ��������� �������� �������� �������
	int getel(int n) const
	{
		if(n < 0 || n >= LIMIT)
		{ cout << "\n��������� ������!"; exit(1); }
		return arr[n];
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	safearay sa1;

	// ������ �������� ���������
	for(int j = 0; j < LIMIT; j++)
		sa1.putel(j, j * 10);

	// ���������� ��������
	for(j = 0; j < LIMIT; j++)
	{
		int temp = sa1.getel(j);
		cout << "������� " << j << " ����� " << temp << endl;
	}

	return 0;
}
