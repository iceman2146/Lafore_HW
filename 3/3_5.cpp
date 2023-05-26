#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    cout<<setw(n/2)<<'X'<<setw(n/2)<<' '<<endl;
    return 0;
}