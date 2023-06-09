// ex8_4.cpp
// ������ ������������� �������������� �������� � ����� Int
#include <iostream>
using namespace std;
#include <process.h>         // ��� exit()
///////////////////////////////////////////////////////////
class Int
{
private:
	int i;
public:
	Int(): i(0)            // ����������� ��� ����������
	{ }

	Int(int ii):i(ii)      // ����������� � ����� ����������
	{ }                    // (�� int � Int)

	void putInt()          // ����� Int
	{ cout << i; }

	void getInt()          // ������ Int � ����������
	{ cin >> i; }

	operator int()         // �������� ��������������
	{ return i; }          // (Int � int)

	Int operator+(Int i2)  // ��������
	{ return checkit(long double(i) + long double(i2)); }

	Int operator-(Int i2)  // ���������
	{ return checkit(long double(i) - long double(i2)); }

	Int operator*(Int i2)  // ���������
	{ return checkit(long double(i)*long double(i2)); }

	Int operator/(Int i2)  // �������
	{ return checkit(long double(i)/long double(i2)); }

	Int checkit(long double  answer) // �������� �����������
	{
		if(answer > 2147483647.0L || answer <-2147483647.0L)
		{ cout << "\n������ ������������\n ";exit(1); }
		return Int(int(answer));
	}
};
///////////////////////////////////////////////////////////
int main()
{
	Int alpha = 20;
	Int beta = 7;
	Int delta, gamma;

	gamma = alpha + beta;      // 27
	cout << "\ngamma ="; gamma.putInt();
	gamma = alpha - beta;      // 13
	cout << "\ngamma ="; gamma.putInt();
	gamma = alpha * beta;      // 140
	cout << "\ngamma ="; gamma.putInt();
	gamma = alpha / beta;      // 2
	cout << "\ngamma ="; gamma.putInt();
	delta = 2147483647;
	gamma = delta +alpha;     // ������ ������������
	delta =-2147483647;
	gamma = delta -alpha;     // ������ ������������
	cout << endl;

	return 0;
}
