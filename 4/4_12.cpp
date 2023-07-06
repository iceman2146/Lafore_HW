#include <iostream>

using namespace std;
struct fraction {
    float chislitel;
    float znamenatel;
    fraction():chislitel(1), znamenatel(1) {}    
    void enter_data()
    {
        
        cout<<"Vvedi pervuyu drob: ";
        cin >> chislitel;           
    if (cin.get() != '/') 
    {
      cout << "expected /\n";
    }
    cin >>znamenatel;}
    
    
};
float Calc(char operation,fraction a,fraction b)
{
    float Result;
    if(operation=='*'||operation=='/'||operation=='+'||operation=='-')
    {
        switch (operation)
        {
        case '*':
            Result=(a.chislitel*b.chislitel)/(a.znamenatel*b.znamenatel); break;
        case '/':
            Result=(a.chislitel*b.znamenatel)/(b.chislitel*a.znamenatel); break;
        case '+':
            Result=(a.chislitel*b.znamenatel+b.chislitel*a.znamenatel)/(a.znamenatel*b.znamenatel); break;
        case '-':
            Result=(a.chislitel*b.znamenatel-b.chislitel*a.znamenatel)/(a.znamenatel*b.znamenatel);; break;
        default:
        cout<<"ERROR";
        break;
        }}
    return Result;
}

int main()
{
    fraction f1,f2;
    f1.enter_data();
    f2.enter_data();
    char answer=' ';
    cout<<"Operation: ";
    cin>>answer;
    
    cout<<"RESULT: "<<Calc(answer,f1,f2);

    return 0;
  }
