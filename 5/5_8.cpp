#include <iostream>
using namespace std;
void swap(int&a,int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<endl<<"swap"<<endl;
}
void print(int&a,int&b)
{
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
}
int main()
{
    int a=1;
    int b=2;
    print(a,b);
    swap(a,b);
    print(a,b);
    return 0;
}