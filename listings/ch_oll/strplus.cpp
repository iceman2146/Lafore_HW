// strplus.cpp
// ���������� �������� + ��� �����
#include <iostream>
using namespace std;
#include <string.h>   // ��� ������� strcpy, strcat
#include <stdlib.h>   // ��� ������� exit
///////////////////////////////////////////////////////////
class String          // ��� ����� ��� �����
{
private:
	enum { SZ = 80 }; // ������������ ������ ������
	char str[SZ];     // ������ ��� ������
public:
	// ����������� ��� ����������
	String()
	{ 
		strcpy(str, "");
	}
	// ����������� � ����� ����������
	String(char s[])
	{ 
		strcpy(str, s);
	}
	// ����� ������
	void display() const
	{ 
		cout << str;
	}
	// �������� ��������
	String operator+(String ss) const
	{
		String temp;                 // ��������� ����������
		if(strlen(str) + strlen(ss.str) < SZ)
		{
			strcpy(temp.str, str);   // �������� ���������� ������ ������
			strcat(temp.str, ss.str);// ��������� ���������� ������ ������
		}
		else
		{
			cout << "\n������������!";
			exit(1);
		}
		return temp;                 // ���������� ���������
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	String s1 = "\n� ����������! "; // ���������� ����������� � ����������
	String s2 = "� ����� �����!";   // ���������� ����������� � ����������
	String s3;                      // ���������� ����������� ��� ����������

	// ���������� ������
	s1.display();
	s2.display();
	s3.display();

	s3 = s1 + s2;       // ����������� ������ s3 ��������� �������� ����� s1 � s2

	s3.display();       // ���������� ���������
	cout << endl;

	return 0;
}
