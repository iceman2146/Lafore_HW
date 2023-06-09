// ex12_1.cpp
// ���������� ������
#include <iostream>
#include <fstream>        // ��� �������� �������
using namespace std;
///////////////////////////////////////////////////////////
class Distance            // ����� ���������� ����������
{
private:
	int feet;
	float inches;
public:
	Distance(): feet(0), inches(0.0)// ����������� ��� ����������
	{ }

	// ����������� � ����� �����������
	Distance(int ft, float in):feet(ft), inches(in)
	{ }

	void getdist()           // �������� ���������� �� ������������
	{
		cout << "\n������� ����:";cin >> feet;
		cout << "������� �����:";cin >> inches;
	}

	void showdist()          // ������� ����������
	{ cout << feet << "\'-" << inches << '\"'; }
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	char ch;
	Distance dist;    // ������� ������ Distance
	fstream file;     // ������� �������/�������� ����

	// ������� ��� ��� ����������
	file.open("DIST.DAT ", ios::binary | ios::app | ios::out | ios::in);
	do                                            // ������ �� ������������ � ����
	{
		cout << "\n���������� ";
		dist.getdist();                           // �������� ����������	
		file.write((char*)&dist, sizeof(dist));   // �������� � ����
		cout << "���������� (y/n)?";
		cin >> ch;
	}
	while(ch == 'y');                             // ����� �� 'n'
	file.seekg(0);                                // ���������� ��������� �� ������ �����


	file.read((char*)&dist, sizeof(dist));        // ��������� ������ ��������
	int count = 0;
	while(!file.eof())                            // ����� �� EOF
	{
		cout << "\n���������� " << ++count << ":";// ������� ����������
		dist.showdist();
		file.read((char*)&dist, sizeof(dist));    // ������� ��� ����������

	}
	cout << endl;

	return 0;
}
