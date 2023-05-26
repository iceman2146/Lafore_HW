#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char c; long answer=0;
    while((c=getche())!='\r')
    {
        answer=answer*10+c-'0';
    }
    cout<<endl<<answer;

    return 0;
}