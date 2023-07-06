#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float a,b,c,d;
    char operation;
    float Result;
    cout<<"Pervaya drob: ";
    cin>>a;
    if (cin.get() != '/') 
    {
      cout << "expected '/'\n";
    }cin>>b;

    cout<<"Vtoraya drob: ";
    cin>>c;
    if (cin.get() != '/') 
    {
      cout << "expected '/'\n";
    }cin>>d;
    
   
    cin>>operation;
    if(operation=='*'||operation=='/'||operation=='+'||operation=='-')
    {
        switch (operation)
        {
        case '*':
            Result=(a*c)/(b*d); break;
        case '/':
            Result=(a*d)/(b*c); break;
        case '+':
            Result=(a*d+b*c)/(b*d); break;
        case '-':
            Result=(a*d-b*c)/(b*d); break;
        default:
        cout<<"ERROR";
        break;
        }}
        cout<<endl<<"result"<<Result<<endl;
   
    return 0;
}