// iline.cpp
// �������� ���� (���������� �� �����) ����� 
#include <fstream>             // ��� �������� �������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	const int MAX = 80;          // ������ ������
	char buffer[MAX];            // ����� �������� 
	ifstream infile("TEST.TXT"); // ������� ������� ����
	while(!infile.eof())         // ���� �� EOF
	{
		infile.getline(buffer, MAX); // ������ ������ ������
		cout << buffer << endl;      // � ������� ��
	}

	return 0;
}
