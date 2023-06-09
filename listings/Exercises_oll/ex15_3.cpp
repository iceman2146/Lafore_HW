// ex15_3.cpp
// ����������� �������� reverse() �������������� ������
#include <iostream>
#include <list>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	int j;
	list<int>theList;
	list<int>::iterator iter1;
	list<int>::iterator iter2;

	for(j = 2; j < 16; j += 2)      // ��������� ������: 2, 4, 6,...
		theList.push_back(j);

	cout << "�� ���������������:";  // ������� ������
	for(iter1 = theList.begin(); iter1 != theList.end(); iter1++)
		cout << *iter1 << " ";

	iter1 = theList.begin();        // ���������� �� ������ ��-�
	iter2 = theList.end();          // ���������� ����� ����������
	--iter2;                        // ������� �� ���������

	while(iter1 != iter2)
	{
		swap(*iter1, *iter2);       // �������� ������ � ����� 
		++iter1;                    // ���������� ������ �� ������
		if(iter1 == iter2)          // ���� ������ ����� ���������
			break;
		--iter2;                    // ���������� ����� �� �����
	}

	cout << "\n����� ���������������:"; // ������� ������

	for(iter1 = theList.begin(); iter1 != theList.end(); iter1++)
		cout << *iter1 << " ";
	cout << endl;

	return 0;
}
