// englmult.cpp
// ��������� ����������� �������������� ������������
#include <iostream>
#include <string>                
using namespace std;
////////////////////////////////////////////////////////////////
class Type                    // ��� ���������
{
private:
	string dimensions;
	string grade;
public:                    // ����������� ��� ����������
	Type() : dimensions("N/A"), grade("N/A")
	{  }
	// ����������� � ����� �����������
	Type(string di, string gr) : dimensions(di), grade(gr) 
	{  }
	void gettype()          // ������ ���������� � ������������
	{
		cout << "   ������� ����������� �������(2x4 � �.�.): ";
		cin >> dimensions;
		cout << "   ������� ����(��������������, ���� � �.�.): ";
		cin >> grade;
	}
	void showtype() const   // ����� ����������
	{
		cout << "\n   �������: " << dimensions;
		cout << "\n   ����: "    << grade;
	}
};
////////////////////////////////////////////////////////////////
class Distance                // ���������� ���� �����
{
private:
	int feet;
	float inches;
public:                    // ����������� ��� ����������
	Distance() : feet(0), inches(0.0)
	{  }                 // ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in)
	{  }
	void getdist()               // ������ ���������� � ������������
	{
		cout << "   ������� ����: ";   cin >> feet;
		cout << "   ������� �����: ";  cin >> inches;
	}
	void showdist() const        // ����� ����������
	{ 
		cout  << feet << "\'-" << inches << '\"';
	}
};
////////////////////////////////////////////////////////////////
class Lumber : public Type, public Distance
{
private:
	int quantity;                 // ���������� ����
	double  price;                // ���� �� �����
public:                           // ����������� ��� ����������
	Lumber() : Type(), Distance(), quantity(0), price(0.0)      
	{  }
	// ����������� � ������ �����������
	Lumber(string di, string gr,  // ��������� ��� Type
		int ft, float in,		  // ��������� ��� Distance
		int qu, float prc) :	  // ���� ����������� ���������
	Type(di, gr),				  // ����� ������������ Type
		Distance(ft, in),		  // ����� ������������ Distance
		quantity(qu), price(prc)  // ����� ����� �������������
	{  }
	void getlumber()
	{
		Type::gettype();
		Distance::getdist();
		cout << "   ������� ����������: "; cin >> quantity;
		cout << "   ������� ����: ";       cin >> price;
	}
	void showlumber() const
	{
		Type::showtype();
		cout << "\n   �����: ";
		Distance::showdist();
		cout << "\n   ��������� " << quantity
			<< " ����: $" << (price * quantity) << " ������";
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Lumber siding;       // ���������� ����������� ��� ����������

	cout << "\n  ���������� �� �������:\n";
	siding.getlumber();  // �������� ������ �� ������������

	// ���������� ����������� � ������ �����������
	Lumber studs("2x4", "const", 8, 0.0, 200, 4.45F);

	// ���������� ����������
	cout << "\n�������";  siding.showlumber();
	cout << "\n����";     studs.showlumber();
	cout << endl;

	return 0;
}
