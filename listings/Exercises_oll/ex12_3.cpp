// ex12_3.cpp
// ������� ������ �����
#include <fstream>                // ��� �������� �������
#include <iostream>
using namespace std;
#include <process.h>              // ��� exit()

int main(int argc, char*argv[])
{
	system("chcp 1251 > nul");

	if(argc != 2)
	{ cerr << "\n������:filename \n ";exit(-1); }

	ifstream infile;              // ������� ������� ����
	infile.open(argv[1]);         // � ������� ���

	if(!infile)                   // �������� ������� ������
	{ cerr << "\n���������� ��    ������" << argv[1];exit(-1); }
							      
	infile.seekg(0, ios::end);    // ������� �� ����� ����� 

	// �������� ����� �����
	cout << "������ " << argv[1] << " ����� "
		<< infile.tellg();
	cout << endl;

	return 0;
}
