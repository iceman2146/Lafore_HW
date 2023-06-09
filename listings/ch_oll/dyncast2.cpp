// dyncast2.cpp
// ������������ ������������� ���������� �����
// RTTI ������ ���� �������
#include <iostream>
#include <typeinfo>					// ��� dynamic_cast
using namespace std;
///////////////////////////////////////////////////////////
class Base
{
protected:
	int ba;
public:
	Base() : ba(0)
	{  }
	Base(int b) : ba(b)
	{  }    
	virtual void vertFunc()			// ��� ���� dynamic_cast
	{  }
	void show()
	{ cout << "Base: ba =" << ba << endl; }
};
///////////////////////////////////////////////////////////
class Derv : public Base
{
private:
	int da;
public:
	Derv(int b, int d) : da(d)
	{ ba = b; }

	void show()
	{ cout << "Derv: ba =" << ba << ", da =" << da << endl; }
};
////////////////////////////////////////////////////////////////
int main()
{
	Base* pBase = new Base(10);     // ��������� �� Base
	Derv* pDerv = new Derv(21, 22); // ��������� �� Derv

	// ���������� � �������� ����: �����������  �� ������ -
	// ��������� ��������� �� ��������� Base ������ Derv
	pBase = dynamic_cast<Base*>(pDerv);
	pBase->show();                  // "Base: ba = 21"

	pBase = new Derv(31, 32);       // ������� ����������
	// ���������� ����� -- pBase ������ ��������� �� Derv)
	pDerv = dynamic_cast<Derv*>(pBase);
	pDerv->show();                  // "Derv: ba = 31, da = 32"

	return 0;
}
