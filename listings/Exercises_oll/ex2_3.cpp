// ex2_3.cpp
// арифметическое присваивание и декремент
#include <iostream>
using namespace std;

int main()
{
	int var = 10;

	cout << var << endl;    // переменная равна 10
	var *= 2;               // ее значение стало 20
	cout << var--<< endl;   // выводит и декрементирует перем.
	cout << var << endl;    // переменная равна 19

	return 0;
}
