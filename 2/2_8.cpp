#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int year=1990;
    int massive[4]={135,7290,1130,16200};
    for (int i=0;i<(sizeof(massive)/sizeof(int));i++)
    {
        cout<<year++;
        cout<<right<<setw(10)<<setfill('_')<<massive[i]<<endl;
    }
    return 0;
}