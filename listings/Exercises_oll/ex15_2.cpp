// ex15_2.cpp
// ������������� ������� ��� ������ �� 
// ��������, push_back() �[]
#include <iostream>
#include <string>
#pragma warning (disable:4786) // ��� Microsoft
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	vector<string>vectStrings;
	string word;
	char ch;

	do {
		cout << "������� �����:";
		cin >> word;
		vectStrings.push_back(word);
		cout << "���������� ('y' ��� 'n'):";
		cin >> ch;
	}while(ch == 'y');

	sort(vectStrings.begin(), vectStrings.end());

	for(int k = 0; k < vectStrings.size(); k++)
		cout << vectStrings[k] << endl;

	return 0;
}
