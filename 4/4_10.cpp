#include <iostream>
#include <math.h>
using namespace std;

struct sterling
{

    int funt,shilling,pens;
    sterling():funt(0),shilling(0),pens(0){}
    sterling(int _f,int _s, int _p):funt(_f),shilling(_s),pens(_p)
    {
        check();
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
};

int main()
{
    sterling a;
    a.from_new_sterling(3.51f);
    a.print();
    return 0;
}