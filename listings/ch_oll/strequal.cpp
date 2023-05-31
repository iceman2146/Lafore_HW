// strequal.cpp
// ���������� �������� ==
#include <iostream>
using namespace std;
#include <string.h> // ��� ������� strcmp
///////////////////////////////////////////////////////////
class String            // ��� ����� ��� �����
{
private:
	enum { SZ = 80 };   // ������������ ������ ������
	char str[SZ];       // ������ ��� ������
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
	// ��������� ������
	void getdist()
	{ 
		cin.get(str, SZ);
	}
	// �������� ���������
	bool operator==(String ss) const
	{
		return (strcmp(str, ss.str) == 0) ? true : false;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	String s1 = "��";
	String s2 = "���";
	String s3;

	cout << "\n������� '��' ��� '���': ";
	s3.getdist();      // �������� ������ �� ������������

	if(s3 == s1)       // ���������� �� ������� '��'
		cout << "�� ����� '��'\n";

	else if(s3 == s2)       // ���������� �� ������� '���'
		cout << "�� ����� '���'\n";

	else
		cout << "�������� �����������!\n";

	return 0;
}
