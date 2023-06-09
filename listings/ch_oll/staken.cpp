// staken.cpp
// ���������� ������� �������� � ������������ �������
#include <iostream>
using namespace std;
#include <process.h>		 // ��� exit()
///////////////////////////////////////////////////////////
class Stack
{
protected:					 // ���������: ������������ private ������
	enum { MAX = 3 };		 // ������ �����
	int st[MAX];			 // ������, ���������� � �����
	int top;				 // ������ ���������� �������� � �����
public:
	Stack()					 // �����������
	{
		top = -1; 
	}	
	void push(int var)		 // ��������� ����� � ����
	{ 
		st[++top] = var;
	}
	int pop()				 // ���������� ����� �� �����
	{ 
		return st[top--];
	}
};
///////////////////////////////////////////////////////////
class Stack2 : public Stack
{
public:
	void push(int var)       // ��������� ����� � ����
	{
		if(top >= MAX - 1)   // ���� ���� �����, �� ������
		{ 
			cout << "\n������: ���� �����"; exit(1);
		}
		Stack::push(var);    // ����� ������� push ������ Stack
	}
	int pop()                // ���������� ����� �� �����
	{
		if(top < 0)          // ���� ���� ����, �� ������
		{
			cout << "\n������: ���� ����\n"; exit(1); 
		}
		return Stack::pop(); // ����� ������� pop ������ Stack(����� ��� return)
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	Stack2 s1;

	s1.push(11);              // �������� � ���� ��������� �����
	s1.push(22);
	s1.push(33);

	cout << endl << s1.pop(); // ������� ����� �� �����
	cout << endl << s1.pop();
	cout << endl << s1.pop();
	cout << endl << s1.pop(); // ��, � ������-�� ������ ���
	cout << endl;

	return 0;
}
