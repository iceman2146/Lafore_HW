// ex10_2.cpp
// ����� ��������� ������ � ������� �������
#include <iostream>
#include <cstring>    // ��� strcpy() � �.�.
#include <cctype>     // ��� toupper()
using namespace std;
///////////////////////////////////////////////////////////
class String          // ���������������� ��������� ���
{
private:
	char*str;         // ��������� �� ������
public:
	String(char*s)    // ����������� � 1 ����������
	{
		int length = strlen(s);    // ����� ������ �� ���������
		str = new char[length + 1];// ������ ������
		strcpy(str, s);            // ����������� ���� ������
	}
	~String()         // ����������
	{ delete str; }

	void display()    // ������� String
	{ cout << str; }

	void upit();      // String � ������� �������
};
//---------------------------------------------------------
void String::upit()   // ������ ������ � ������� �������
{
	char*ptrch = str; // ��������� �� ��� ������
	while(*ptrch)     // �� ������� �������,
	{
		*ptrch = toupper(*ptrch); // ������ ������ �  ������� �������
		ptrch++;                  // ������� � ���������� �������
	}
}
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	String s1 = "My home is very, very beeg";

	cout << "\ns1 =";  // ������� ������
	s1.display();
	s1.upit();         // � ������� �������
	cout << "\ns1 =";  // ������� ������
	s1.display();
	cout << endl;

	return 0;
}
