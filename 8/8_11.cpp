#include <iostream>
using namespace std;

struct sterling
{

    int funt,shilling,pens;
    sterling():funt(0),shilling(0),pens(0){}
    sterling(int _f,int _s, int _p):funt(_f),shilling(_s),pens(_p)
    {
        check();
    }
    void Put_sterling()
    {
        cout<<"Enter money (9.19.11): ";
        cin >> funt;           
    if (cin.get() != '.') 
    {
      cout << "expected .\n";
    }
    cin >>shilling;
     if (cin.get() != '.') 
    {
      cout << "expected .\n";
    }
    cin >>pens;
    }
    int to_pens()
    {
        int temp;
        temp=pens+12*shilling+240*funt;
        return temp;
    }
    
    void from_new_sterling(float desyt_funt)
    {
    float cel;
    cel=floorf(desyt_funt);
    float desyat;
    desyat=((desyt_funt)*100.0);
    
    pens=(int)(2.4*desyat);
    check();
    }

    void check()
    { 
        do
    {
        if(pens>=12)
        {
            pens-=12;
            shilling++;
        }
    }while(pens>=12);
        do
    {
        if(shilling>=20)
        {
            shilling-=20;
            funt++;
        }
    }while(shilling>=20);
    }

    void print()
    {
         cout<<endl<<"summa: "<<funt<<"."<<shilling<<"."<<pens<<endl;
    }
    sterling operator+(sterling s2)
    {
    sterling temp(funt,shilling,pens);
    temp.pens+=s2.pens;
    temp.shilling+=s2.shilling;
    temp.funt+=s2.funt;
    
    temp.check();
    return temp;
    }
    sterling operator-(sterling s2)
    {
    sterling temp(funt,shilling,pens);
    temp.pens-=s2.pens;
    temp.shilling-=s2.shilling;
    temp.funt-=s2.funt;
    
    temp.check();
    return temp;
    }
    sterling operator*(double s2)
    {
        sterling temp;
    temp.pens=to_pens();
    temp.pens*=s2;
    
    
    temp.check();
    return temp;
    }
    sterling operator/(double s2)
    {
    sterling temp;
    temp.pens=to_pens();
    temp.pens/=s2;
    
    
    temp.check();
    return temp;
    }
};

sterling summ(sterling& a, sterling& b)
{
    sterling temp;
    temp.pens=a.pens+b.pens;
    temp.shilling=a.shilling+b.shilling;
    temp.funt=a.funt+b.funt;
    temp.check();
    return temp;
}
int main()
{
    sterling a,b,c;
    a.from_new_sterling(3.51f);
    b.from_new_sterling(4.25f);
    a.print();
    b.print();
    c=summ(a,b);
    c.print();
    return 0;
}