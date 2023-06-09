// set.cpp
// ���������, �������� ������� ���� string
#pragma warning (disable:4786) // ��� ������ � ����������� 
// (������ ��� ������������ Microsoft)
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	// ������ ��������� ��������
	string names[] = {"Juanita", "Robert",
		"Mary", "Amanda", "Marie"};

	// ���������������� ��������� ��������
	set<string, less<string> > nameSet(names, names + 5);

	// �������� ��� ���������
	set<string, less<string> >::iterator iter;

	nameSet.insert("Yvette");   // ������� ���������
	nameSet.insert("Larry");
	nameSet.insert("Robert");   // �������� �������: �����
	                            // ������� ��� �������
	nameSet.insert("Barry");
	nameSet.erase("Mary");      // �������� ��������

	// ����� ������� ���������
	cout << "\n������ =" << nameSet.size() << endl;
	iter = nameSet.begin();     // ����� ��������� ���������
	while(iter != nameSet.end())
		cout << *iter++ << '\n';

	string searchName;          // ��������� �������� ����� ��
	                            // ������������
	cout << "\n������� ������� ���: ";
	cin >> searchName;

	// ����� ���������������� ������� �����
	iter = nameSet.find(searchName);
	if(iter == nameSet.end())
		cout << "��� " << searchName << " ����������� �� ���������.";
	else
		cout << "��� " << *iter << " ������������ �� ���������.";
	cout << endl;

	return 0;
}
