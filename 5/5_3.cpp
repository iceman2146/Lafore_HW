#include <iostream>
using namespace std;
void zeroSmaller(int& a,int &b)
{
    if(a==b)
    return;
    else if (a>b)
    {
        b=0;
    }
    else a=0;
}

int main()
{
    
    int a=9;
    int b=1;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    zeroSmaller(a,b);
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}