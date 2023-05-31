// seekg.cpp
// ����� ����������� ������� � �����
#include <fstream>        // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person              // ����� person
{

protected:
	char name[80];        // ��� ��������
	int age;              // ��� �������
public:
	void getdata()        // �������� ������ � ��������
	{
		cout << "\n  ������� ���: "; cin >> name;
		cout << "  ������� �������: "; cin >> age;
	}
	void showData(void)   // ����� ������ � ��������
	{
		cout << "\n  ���: " << name;
		cout << "\n  �������: " << age;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	person pers;                            // ������� ������ person 
	ifstream infile;                        // ������� ������� ����
	infile.open("GROUP.DAT", ios::in | ios::binary); // �������  ����

	infile.seekg(0, ios::end);              // ���������� ��������� �� 0
	                                        // ���� �� ����� �����
	int endposition = infile.tellg();       // ����� �������
	int n = endposition / sizeof(person);   // ����� �������
	cout << "\n� ����� " << n << " �������(�)";

	cout << "\n������� ����� �������: ";
	cin >> n;
	int position = (n - 1) * sizeof(person);// �������� ������
	                                        // ������ ��� ������� �� ����� ������
	infile.seekg(position);                 // ����� ���� �� ������
	                                        // ��������� ���� �������
	infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	pers.showData();                        // ������� ���� �������
	cout << endl;

	return 0;
}
