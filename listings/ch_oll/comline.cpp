// comline.cpp
// ������������ ������ � ����������� ��������� ������
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	system("chcp 1251 > nul");

	cout << "\nargc = " << argc << endl;     // ����� ���������� 

	for(int j = 0; j < argc; j++)            // ������� ���������
		cout << "�������� " << j << " = " << argv[j] << endl;

	return 0;
}
