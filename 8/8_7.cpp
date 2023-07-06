#include <iostream>
#include <cmath>
using namespace std;
class fraction {
    private:
    int chislitel;
    int znamenatel;
    int celoe;
    public:
    fraction():chislitel(1), znamenatel(1), celoe(0){}
    fraction(int _c, int _z):chislitel(_c), znamenatel(_z), celoe(0) {}
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
        lowterms();
        get_celoe();
        //lowterms();
        if(celoe==0){
            cout<<chislitel<<"/"<<znamenatel<<endl;
            }
        else cout<<celoe<<" "<<chislitel<<"/"<<znamenatel<<endl; return;
        
    }
    int get_chislitel()
    {
        return chislitel;
    }
    int get_znamenatel()
    {
        return znamenatel;
    }
    void set_chislitel(int& a)
    {
        chislitel=a;
    }
    void set_znamenatel(int& a)
    {
        znamenatel=a;
    }
    void get_celoe()
    {
        if(chislitel>znamenatel)
        {
            celoe=chislitel/znamenatel;
            chislitel-=celoe*znamenatel;
        }
    }
    void lowterms()
    {
        int gcd;
        for(int i=1;i<=chislitel&&i<=znamenatel;++i)
        {
            if(chislitel%i==0&&znamenatel%i==0)
            {
                gcd=i;
            }
        }
        
        chislitel/=gcd;
        znamenatel/=gcd;
    }
    fraction operator+(fraction& b)
    {
    fraction temp;
    int _chislitel,_znamenatel;
    _chislitel=get_chislitel()*b.get_znamenatel()-b.get_chislitel()*get_znamenatel();
    _znamenatel=get_znamenatel()*b.get_znamenatel();
    temp.set_chislitel(_chislitel);
    temp.set_znamenatel(_znamenatel);
    return temp;
    }
    fraction operator-(fraction& b)
    {
    fraction temp;
    int _chislitel,_znamenatel;
    _chislitel=get_chislitel()*b.get_znamenatel()-b.get_chislitel()*get_znamenatel();
    _znamenatel=get_znamenatel()*b.get_znamenatel();
    temp.set_chislitel(_chislitel);
    temp.set_znamenatel(_znamenatel);
    return temp;
    }
    fraction operator*(fraction& b)
    {
    fraction temp;
    int _chislitel,_znamenatel;
    _chislitel=get_chislitel()*b.get_chislitel();
    _znamenatel=get_znamenatel()*b.get_znamenatel();
    temp.set_chislitel(_chislitel);
    temp.set_znamenatel(_znamenatel);
    return temp;
    }
    fraction operator/(fraction& b)
    {
     fraction temp;
    int _chislitel,_znamenatel;
    _chislitel=get_chislitel()*b.get_znamenatel();
    _znamenatel=get_znamenatel()*b.get_chislitel();
    temp.set_chislitel(_chislitel);
    temp.set_znamenatel(_znamenatel);
    return temp;
    }
    
};

fraction fCalc(char operation,fraction& a,fraction& b)
{
    fraction Result;
    if(operation=='*'||operation=='/'||operation=='+'||operation=='-')
    {
        switch (operation)
        {
        case '*':
            Result=a*b; break;
        case '/':
            Result=a/b; break;
        case '+':
            Result=a+b; break;
        case '-':
            Result=a-b; break;
        default:
        cout<<"ERROR";
        break;
        }
        }
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
