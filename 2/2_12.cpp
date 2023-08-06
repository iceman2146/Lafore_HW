#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    float money;
    cout<<"enter Money";
    cin>>money;
    float cel;
    cel=floorf(money);
    float desyat;
    desyat=((money-cel)*100.0);
    int pens;
    pens=(int)(2.4*desyat);
    cout<<endl<<pens<<endl;
    int shilling=0;
    int funt=(int)(cel);
    do{
        if(pens>=12)
        {
            pens-=12;
            shilling++;
        }
    }while(pens>=12);
    do{
        if(shilling>=20)
        {
            shilling-=20;
            funt++;
        }
    }while(shilling>=20);
    cout<<"In old engl:"<<funt<<"."<<shilling<<"."<<pens<<endl;
    return 0;

}