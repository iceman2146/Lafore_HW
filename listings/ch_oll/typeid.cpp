// typeid.cpp
// ������������ ������� typeid()
// RTTI ������ ���� �������������
#include <iostream>
#include <typeinfo>          // ��� typeid()
using namespace std;
///////////////////////////////////////////////////////////
class Base
{
	virtual void virtFunc()  // ��� ���� typeid
	{  }
};
class Derv1 : public Base
{ };
class Derv2 : public Base
{ };
///////////////////////////////////////////////////////////
void displayName(Base* pB)
{
	cout << "��������� �� ������ ������ "; // ������� ��� ������
	cout << typeid(*pB).name() << endl;    // �� ������� ��������� pB
}
//---------------------------------------------------------
int main()
{
	system("chcp 1251 > nul");

	Base* pBase = new Derv1;
	displayName(pBase);		 // "��������� �� ������ ������ Derv1"
	pBase = new Derv2;
	displayName(pBase);		 // " ��������� �� ������ ������ Derv2"

	return 0;
}
