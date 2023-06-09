// mutable.cpp
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class scrollbar
{
private:
	int size;				// ����������� ��� ���������
	mutable string owner;	// �� ����������� ��� ���������
public:
	scrollbar(int sz, string own) : size(sz), owner(own)
	{ }
	void setSize(int sz)	// ��������� �������
	{ 
		size = sz;
	}
	void setOwner(string own) const // ��������� ���������
	{ 
		owner = own;
	}
	int getSize() const		// �������� �������
	{ 
		return size; 
	}
	string getOwner() const	// �������� ���������
	{ 
		return owner;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	const scrollbar sbar(60, "���������� 1");

	// sbar.setSize(100);			// �� ����� ���� ������� � �������-���������
	sbar.setOwner("���������� 2");	// ����� ���� ������� ���� ���� ���������������

	cout << sbar.getSize() << ", " << sbar.getOwner() << endl;

	return 0;
}
