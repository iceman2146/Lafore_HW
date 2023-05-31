// еx2_1.cpp
// переводит галлоны в кубические футы
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	float gallons, cufeet;
	cout << "\n¬ведите количество в галлонах:";
	cin >> gallons;
	cufeet = gallons / 7.481;
	cout << "«начение в кубических футах: " << cufeet << endl;

	return 0;
}
