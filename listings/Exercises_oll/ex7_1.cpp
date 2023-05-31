// ex7_1.cpp
// переворачивает строку
#include <iostream>
#include <cstring>                 // дл€ strlen()
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	void reversit(char[]);         // прототип
	const int MAX = 80;            // размер массива
	char str[MAX];                 // строка

	cout << "\n¬ведите строку:";   // получить строку от
	cin.get(str, MAX);             // пользовател€
	
	reversit(str);                 // перевернуть строку
	cout << "ѕеревернута€ строка:";
	cout << str << endl;           // и вывести ее

	return 0;
}
//---------------------------------------------------------
// reversit()
// функци€, переворачивающа€ строку, переданную в аргументе
void reversit(char s[])
{
	int len = strlen(s);           // найти длину строки

	// помен€ть все символы из первой половины
	for(int j = 0; j < len / 2; j++)  
	{
		char temp = s[j];          // на символы
		s[j] = s[len Ц j - 1];     // из второй половины
		s[len Ц j - 1] = temp;
	}
}