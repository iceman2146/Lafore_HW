// oline.cpp
// �������� ����� ����� � ���������
#include <fstream>              // ��� ��������
// ��������� �����/������
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	ofstream outfile("TEST.TXT"); // ������� �������� ���� 

	// ��������� ����� � ����
	outfile << "�������� ����. � ������� �����.\n";
	outfile << "� ������������ �������� ������� \n";
	outfile << "���������� �������� ������ \n";
	outfile << "� �������� �������������� ������.\n";

	return 0;
}
