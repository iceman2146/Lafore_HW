// ref.cpp
// ���������� ���������� ��������� �������� ����������
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	void intfrac(float, float&, float&);		// ��������
	float number, intpart, fracpart;

	do {
		cout << "\n������� ������������ �����:";
		cin >> number;							// ���� ����� �������������
		intfrac(number, intpart, fracpart);     // ���������� ����� � ������� �����
		cout << "����� ����� ����� " << intpart // ����� �����������
			<< ", ������� ����� ����� " << fracpart << endl;
	} while(number != 0.0);						// ����� �� �����, ���� ������ ����

	return 0;
}
//--------------------------------------------------------
// ������� intfrac()
// ��������� ����� � ������� ����� ������������� �����
void intfrac(float n, float& intp, float& fracp)
{
	long temp = static_cast<long>(n);	// �������������� � ���� long,
	intp = static_cast<float>(temp);	// � ������� �� float
	fracp = n - intp;	// �������� ����� �����
}
