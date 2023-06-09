// ex14_2.cpp
// ��������� ������� ��� ������
#include <iostream>
using namespace std;
const int MAX = 3;
///////////////////////////////////////////////////////////
template <class Type>
class Queue
{
private:
	Type qu[MAX];  // ������ ������������� ����
	int head;      // ������ ������ ������� (������ � �������� ���������)
	int tail;      // ������ ������ ������� (���� ��������� ����� ��������)
public:
	Queue()                // �����������
	{ head =-1; tail =-1; }

	void put(Type var)     // ������� �������� � �����
	{
		qu[++tail] = var;
		if(tail >= MAX - 1)// ��������� �����
			tail =-1;
	}

	Type get()             // �������� �������� �� ������
	{
		Type temp = qu[++head]; // ���������� ��������
		if(head >= MAX - 1)     // ��������� ������
			head =-1;
		return temp;            // ������� ��������� ��������
	}
};
///////////////////////////////////////////////////////////
int main()
{
	Queue<float>q1;        // q1 - ������ ������ Queue<float>
	q1.put(1111.1F);       // ������� 3
	q1.put(2222.2F);
	q1.put(3333.3F);
	cout << "1:" << q1.get() << endl; // �������� 2
	cout << "2:" << q1.get() << endl;
	q1.put(4444.4F);                  // ������� 2
	q1.put(5555.5F);
	cout << "3:" << q1.get() << endl; // �������� 1
	q1.put(6666.6F);                  // ������� 1
	cout << "4:" << q1.get() << endl; // �������� 3
	cout << "5:" << q1.get() << endl;
	cout << "6:" << q1.get() << endl;

	Queue<long>q2;                    // q2 - ������ ������ Queue<long>
	q2.put(123123123L);               // ������� 3 (long), �������� 2
	q2.put(234234234L);
	q2.put(345345345L);

	cout << "1:" << q2.get() << endl;
	cout << "2:" << q2.get() << endl;
	cout << "3:" << q2.get() << endl;

	return 0;
}
