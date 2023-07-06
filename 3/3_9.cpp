#include <iostream>
using namespace std;

int main()
{
    int chislogostey=6;
    int stuliev=4;
    int temp=1;
    for(int i=chislogostey;i>(chislogostey-stuliev);i--)
    {
        
        temp*=i;
    }
    cout<<"rassadok"<<temp<<endl;
    return 0;
}