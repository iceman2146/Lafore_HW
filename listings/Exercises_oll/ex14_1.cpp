// ex14_1.cpp
// ������������� ������� ��� ���������� �������� �� �������� 
// ��������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
template <class atype>             // ������ �������
atype avg(atype*array, int size)
{
	atype total = 0;
	for(int j = 0; j < size; j++)  // ������� �� �������
		total += array[j];
	return (atype)total / size;
}
///////////////////////////////////////////////////////////
int intArray[] = { 1, 3, 5, 9, 11, 13 };
long longArray[] = { 1, 3, 5, 9, 11, 13 };
double  double Array[] = { 1.0, 3.0, 5.0, 9.0, 11.0, 13.0 };
char charArray[] = { 1, 3, 5, 9, 11, 13 };
///////////////////////////////////////////////////////////
int main()
{
	cout << "\navg(intArray)    =" << avg(intArray, 6);
	cout << "\navg(longArray)   =" << avg(longArray, 6);
	cout << "\navg(double Array)=" << avg(double Array, 6);
	cout << "\navg(charArray)   =" << (int)avg(charArray, 6) << endl;

	return 0;
}
