// ex6_1.cpp
// ������������� ������ ��� ������������ �������������� ����
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Int // (�� �� �� �����, ��� int)
{
private:
	int i;
public:
	Int()                    // �������� Int
	{ i = 0; }	

	Int(int ii)              // �������� � ������������� Int
	{ i = ii; }		

	void add(Int i2, Int i3) // ���������� ��� �������� ���� Int
	{ i = i2.i +i3.i; }	

	void display()           // ������� Int
	{ cout << i; }		   
};						   
////////////////////////// /////////////////////////////////
int main()				   
{						   
	Int Int1(7);             // ������� � ���������������� Int
	Int Int2(11);            // ������� � ���������������� Int
	Int Int3;                // ������� Int 
	Int3.add(Int1, Int2);    // �������� ���� ���������� ���� Int
	cout << "\nInt3 ="; Int3.display(); // ������� ���������
	cout << endl;

	return 0;
}
