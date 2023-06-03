#include  <iostream>

using namespace std;

class Counter{
    static int count;
    int some_data;
    public:
    Counter():some_data(0){
        count++;
    }
    Counter(int data):some_data(data)    {count++;}
    ~Counter(){
        count--;
    }
    int getCount()const{
        return count;
    }
    int getSomeData()const{
        return some_data;
    }
    void setSomeData(int data){
        some_data = data;
    }
    void print()const{
        cout << count << " " << some_data << endl;
    }
};
int Counter::count = 0;

int main(int argc, char *argv[])
{
    Counter a,b,c;
    Counter d(10);
    a.print();
    b.setSomeData(5);
    b.print();
    c.print();
    d.print();
    cout<<endl<<"----------------------------------------------------------------"<<endl;
    a.~Counter();
    b.~Counter();
b.print();

    return 0;
}