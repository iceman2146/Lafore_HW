// ex6_2.cpp
// ������������� ������ ��� ������������� ��������������� ���������
#include <iostream>
using namespace std;
#include <conio.h>
const char ESC = 27;        // ��� ������� �Esc�
const double  TOLL = 0.5;   // ������� ����� 50 �������
///////////////////////////////////////////////////////////
class tollBooth
{
private:
	unsigned int totalCars; // ����� ����� �� ����
	double  totalCash;      // ����� ����� �� ����
public:                     // �����������
	tollBooth() : totalCars(0), totalCash(0.0)
	{ }

	void payingCar()        // � car paid
	{ totalCars++; totalCash += TOLL; }

	void nopayCar()         // � car didn 't pay
	{ totalCars++; }

	void display()const     // display totals
	{ 
		cout << "\n������: " << totalCars
			<< ", ������: " << totalCash
			<< endl; 
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	tollBooth booth1;   // ������� ��������
	char ch;

	cout << "\n������� 0 ��� ������ ��� ������, "
		<< "\n 1 ��� ������ ������������ ������, "
		<< "\n Esc ��� ������.\n ";
	do {
		ch = getche();  // �������� ������
		if(ch == '0')   // ���� ��� 0, ������ �� ����������
			booth1.nopayCar();
		if(ch == '1')   // ���� 1, ������ ����������
			booth1.payingCar();
	}while(ch != ESC);  // ����� �� ����� �� Esc
	booth1.display();   // ����� ������

	return 0;
}
