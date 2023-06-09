// ex8_2.cpp
// ������������� �������� '+=' ��� ������������ �����
#include <iostream>
#include <cstring>          // ��� strcpy(), strlen()
using namespace std;
#include <process.h>        // ��� exit()
///////////////////////////////////////////////////////////
class String                // ���������������� ��������� ���
{
private:
	enum { SZ = 80 };     // ������ �������� String
	char str[SZ];         // �������� �-������
public:

	String()              // ����������� ��� ����������
	{ strcpy(str, ""); }

	String(char s[])      // ����������� � 1 ����������
	{ strcpy(str, s); }

	void display()           // ����� ������
	{ cout << str; }

	// ����������� ������ � ���������
	String operator+=(String ss)
	{   // ��������� ����������� � ��������� ������
		if(strlen(str) + strlen(ss.str) >= SZ)
		{ cout << "\n������������ ������"; exit(1); }
		strcat(str, ss.str); // �������� ����������� ������
		return String(str);  // ������� ��������� String
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	String s1 = "� ����� �����!"; // ���������� ����������� �
	                              // ����� ����������

	String s2 = "���, ��������!"; // ���������� �����������
	                              // � ����� ����������

	String s3;    // ���������� ����������� ��� ����������

	s3 = s1 += s2;// ��������� s2 � s1, ��������� - � s3

	cout << "\ns1 ="; s1.display(); // ������� s1
	cout << "\ns2 ="; s2.display(); // ������� s2
	cout << "\ns3 ="; s3.display(); // ������� s3
	cout << endl;

	return 0;
}
