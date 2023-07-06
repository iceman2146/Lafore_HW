#include <iostream>
using namespace std;
#include <process.h>      // для функции exit
const int LIMIT = 100;    // размер массива
///////////////////////////////////////////////////////////
class safearray
{
private:
	int arr[LIMIT];
public:
	// обратите внимание, что функция возвращает ссылку!
	int& operator[](int n)
	{
		if(n < 0 || n >= LIMIT)
		{
			cout << "\nError index!"; exit(1);
		}
		return arr[n];
	}
    safearray(){
        for(int j = 0; j < LIMIT; j++)
		arr[j] = j * 10;
    }
    safearray(int n, int u){
        if(n>u)
        {
			cout << "\nError index!(n<u)"; exit(1);
		}
        if((n+u)>100)
        {
			cout << "\nError index!(>100)"; exit(1);
		}
        {
        for(int j = n; j < LIMIT; j++)
		arr[j] = j * 10;
    }
    }
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	safearray sa1;

	// задаем значения элементов
	    // используем функцию слева от знака =

	// показываем элементы
	for(int j = 0; j < LIMIT; j++)
	{
		int temp = sa1[j];  // используем функцию справа от знака =
		cout << "Element " << j << " equal " << temp << endl;
	}

	return 0;
}