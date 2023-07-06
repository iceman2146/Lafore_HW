// englplus.cpp
// перегрузка операции + для сложения переменных типа Distances
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance  // класс английских мер длины
{
private:
	int feet;
	float inches;
public:
	// конструктор без параметров
	Distance() : feet(0), inches(0.0)
	{ }
	// конструктор с двумя параметрами
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	// получение информации от пользователя
	void getdist()
	{
		cout << "\nEnter Futty: "; cin >> feet;
		cout << "Enter Duym: ";  cin >> inches;
	}
	// показ информации
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	// сложение двух длин
	Distance operator+(Distance) const;
    Distance operator-(Distance) const;
};
///////////////////////////////////////////////////////////
// сложение двух длин
Distance Distance::operator+(Distance d2) const
{
	int f = feet + d2.feet;        // складываем футы
	float i = inches + d2.inches;  // складываем дюймы
	if(i >= 12.0)                  // если дюймов стало больше 12
	{
		i -= 12.0;                 // то уменьшаем дюймы на 12
		f++;                       // и увеличиваем футы на 1
	}
	return Distance(f, i);         // создаем и возвращаем временную переменную
}
Distance Distance::operator-(Distance d2) const
{
	int f = feet - d2.feet;        // складываем футы
	float i = inches - d2.inches;  // складываем дюймы
	if(i >= 12.0)                  // если дюймов стало больше 12
	{
		i -= 12.0;                 // то уменьшаем дюймы на 12
		f++;                       // и увеличиваем футы на 1
	}
	return Distance(f, i);         // создаем и возвращаем временную переменную
}
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Distance dist1, dist3;  
	dist1.getdist();               

	Distance dist2(11, 6.25);      

	dist3 = dist1 - dist2;        

	

	// показываем, что же у нас получилось
	cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist2 = "; dist2.showdist(); cout << endl;
	cout << "dist3 = "; dist3.showdist(); cout << endl;
	

	return 0;
}
