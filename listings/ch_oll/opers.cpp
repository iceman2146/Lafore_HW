// opers.cpp
// ���������� ������� � �����
#include <fstream>        // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person              // ����� person
{
protected:
	char name[80];        // ��� ��������
	short age;            // �������
public:
	void getdata()        // �������� ������ � ��������
	{
		cout << "������� ���: "; cin >> name;
		cout << "������� �������: "; cin >> age;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	person pers;          // ������� ������
	pers.getdata();       // �������� ������

	// ������� ������ ofstream
	ofstream outfile("PERSON.DAT", ios::binary);

	// �������� � ����
	outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));

	return 0;
}
