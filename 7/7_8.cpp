#include <iostream>
using namespace std;

const int SIZE=10;
class safearray
{
    private:
    int array[SIZE];
    public:
    safearray(){}
    
    void putel(int n, int val)
    {
        if(n>=SIZE||n<0)
        {
            cout<<"ERRROR;";
        }else{
            array[n]=val;
        }
    }
    int getel(int n)
    {
        if(n>=SIZE||n<0)
        {
            cout<<"ERRROR;";
        }else{
            return array[n];
            
        }
    }
};
int main()
{
    safearray Array;
    //Array={1,2,3,4,5,6,7,8,9,10};
    //cout<<"2="<<Array[1]<<endl;
    Array.putel(3,7);
    Array.putel(18,7);
    cout<<Array.getel(3);
    Array.getel(18);
    
    //cout<<"11="<<Array[10]<<endl;
    //Array[2]=5;
    //Array[10]=4;
    return 0;
}