// vertdest.cpp
// ���� ������������� � ����������� ������������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Base
{
public:
	~Base()                 // ������������� ����������
		//    virtual ~Base()         // ����������� ����������
	{ cout << "Base ������\n"; }
};
///////////////////////////////////////////////////////////
class Derv : public Base
{
public:
	~Derv()
	{ cout << "Derv ������\n"; }
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Base* pBase = new Derv;
	delete pBase;

	return 0;
}
