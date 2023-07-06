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
    void print()
    {
        cout<<chislitel<<"/"<<znamenatel<<endl;
    }
    
};
float Calc(char operation,fraction& a,fraction& b)
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
fraction fadd(fraction& a,fraction& b)
{
    fraction temp;
    temp.chislitel=a.chislitel*b.znamenatel+b.chislitel*a.znamenatel;
    temp.znamenatel=a.znamenatel*b.znamenatel;
    return temp;
}
fraction fsub(fraction& a,fraction& b)
{
    fraction temp;
    temp.chislitel=a.chislitel*b.znamenatel+b.chislitel*a.znamenatel;
    temp.znamenatel=a.znamenatel*b.znamenatel;
    return temp;
}
fraction fmul(fraction& a,fraction& b)
{
    fraction temp;
    temp.chislitel=a.chislitel*b.chislitel;
    temp.znamenatel=a.znamenatel*b.znamenatel;
    return temp;
}
fraction fdiv(fraction& a,fraction& b)
{
    fraction temp;
    temp.chislitel=a.chislitel*b.znamenatel;
    temp.znamenatel=a.znamenatel*b.chislitel;
    return temp;
}
fraction fCalc(char operation,fraction& a,fraction& b)
{
    fraction Result;
    if(operation=='*'||operation=='/'||operation=='+'||operation=='-')
    {
        switch (operation)
        {
        case '*':
            Result=fmul(a,b); break;
        case '/':
            Result=fdiv(a,b); break;
        case '+':
            Result=fadd(a,b); break;
        case '-':
            Result=fsub(a,b); break;
        default:
        cout<<"ERROR";
        break;
        }}
    return Result;
}
int main()
{
    fraction f1,f2,res;
    f1.enter_data();
    f2.enter_data();
    char answer=' ';
    cout<<"Operation: ";
    cin>>answer;
    
    cout<<"RESULT: ";
    res=fCalc(answer,f1,f2);
    res.print();


    return 0;
  }
