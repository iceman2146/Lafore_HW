// ezprint.cpp
// ������� ����� �� �������
#include <fstream>               // ��� �������� �������
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	char* s1 = "\n������� ���� ���������� ����� -- ";
	int  n1 = 17982;

	ofstream outfile;            // ������� �������� ����
	outfile.open("PRN");         // ������� �������� ������ � ����
	outfile << s1 << n1 << endl; // ������� ������ �� �������
	outfile << '\x0C';           // �������� ���� �� �����

	return 0;
}
