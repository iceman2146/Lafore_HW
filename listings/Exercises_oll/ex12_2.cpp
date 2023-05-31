// ex12_2.cpp
// �������� ������� COPY
#include <fstream>           // ��� �������� �������
#include <iostream>
using namespace std;
#include <process.h>         // ��� exit()

int main(int argc, char*argv[])
{
	system("chcp 1251 > nul");

	if(argc != 3)
	{ cerr << "\n������:ocopy srcfile destfile ";exit(-1); }
	char ch;                 // ������ ��� ����������
	ifstream infile;         // ������� ������� ����
	infile.open(argv[1]);    // ������� ����
	if(!infile)              // �������� �� ������
	{ cerr << "\n���������� �������� " << argv[1];exit(-1); }

	ofstream outfile;        // ������� �������� ����
	outfile.open(argv[2]);   // ������� ���
	if(!outfile)             // �������� �� ������
	{ cerr << "\n���������� �������� " << argv[2];exit(-1); }

	while(infile)            // �� EOF
	{
		infile.get(ch);      // ������� ������
		outfile.put(ch);     // �������� ������
	}

	return 0;
}
