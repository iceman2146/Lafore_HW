// oprint.cpp
// �������� ������� print
#include <fstream>            // ��� �������� �������
#include <iostream>
using namespace std;
#include <process.h>          // ��� exit()
int main(int argc, char* argv[])
{
	system("chcp 1251 > nul");

	if(argc != 2)
	{
		cerr << "\n������ �������: oprint ���_�����\n";
		exit(-1);
	}
	char ch;                  // ������ ��� ����������
	ifstream infile;          // ������� ������� ����
	infile.open(argv[1]);     // ������� ����
	if(!infile)               // ��������� �� ������� ������
	{
		cerr << "\n���������� ������� " << argv[1] << endl;
		exit(-1);
	}
	ofstream outfile;         // ������� ����
	outfile.open("PRN");      // ������� ������ �������� � ����
	while(infile.get(ch) != 0)// ������� ������
		outfile.put(ch);      // ��������� ������ �� ������
	outfile.put('\x0C');      // ������ ��������

	return 0;
} 
