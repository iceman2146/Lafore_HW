#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float a,b,c;
    
    char operation,ch;
    do{
    cin>>a>>b>>operation;
    if(operation=='*'||operation=='/'||operation=='+'||operation=='-')
    {
        switch (operation)
        {
        case '*':
            c=a*b; break;
        case '/':
            c=a/b; break;
        case '+':
            c=a+b; break;
        case '-':
            c=a-b; break;
        
        }
        cout<<endl<<a<<operation<<b<<" = "<<c;}
    else
    cout<<"error operation";
    cout<<"\none more?";ch=getche();
    }while(ch=='n');
    return 0;
}