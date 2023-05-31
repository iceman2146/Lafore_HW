// ex15_2.cpp
// использование вектора дл€ работы со 
// строками, push_back() и[]
#include <iostream>
#include <string>
#pragma warning (disable:4786) // дл€ Microsoft
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
		cout << "¬ведите слово:";
		cin >> word;
		vectStrings.push_back(word);
		cout << "ѕродолжать ('y' или 'n'):";
		cin >> ch;
	}while(ch == 'y');

	sort(vectStrings.begin(), vectStrings.end());

	for(int k = 0; k < vectStrings.size(); k++)
		cout << vectStrings[k] << endl;

	return 0;
}
