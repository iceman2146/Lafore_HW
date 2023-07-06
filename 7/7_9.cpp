
// класс очереди
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Queue
{
private:
	//enum { MAX = 10 }; // немного нестандартный синтаксис
	int *array;       // стек в виде массива
	int head;           // конец очереди
    int tail;
    int count;
    int capacity;
public:

	Queue(int size)            // конструктор
	{ 
        capacity=size;
        head =0;
        count=0;
        tail=-1;
		array=new int[size];
	}
    ~Queue()
    {
        delete[] array;
    }
    int size()
    {
        return count;
    }
    bool isEmpty()
    {
        return(size()==0);
    }
    bool isFull()
    {
        return(size()==capacity);
    }
    int peek()
    {
        if(isEmpty())
        {
            cout<<"\nArray is empty\n";

        }
            else return array[head];
    }
    int last()
    {
        if(isEmpty())
        {
            cout<<"\nArray is empty\n";
            
        }
        else return array[tail];
    }
    void enque(int a)
    {
        
        if(isFull())
        {
            cout<<"\nArray is full\n";
            exit(0);
        }
        tail=(tail+1)%capacity;
        array[tail]=a;
        
        cout<<endl<<"add: "<<a<<" to "<<tail<<endl;
        
        count++;
    }
    int deque()
    {
        if(isEmpty())
        {
            cout<<"\nArray is empty\n";
        }
        
        int temp=array[head];
        head=(head+1)%capacity;
        //array[tail]=a;
        count--;
        return temp;
    }
    void print()
    {
        cout<<"Queue: ";
        for(int i=0;i<count;i++)
        {
            cout<<i+1<<":"<<array[i]<<" ";
        }
        cout<<endl;
    }
};
///////////////////////////////////////////////////////////
int main()
{
	Queue s1(5);
    s1.print();
    s1.enque(1);
	s1.enque(7);
    s1.enque(8);
    
    s1.print();
    s1.deque();
    s1.print();
    s1.enque(5);
    s1.print();
	return 0;
}
