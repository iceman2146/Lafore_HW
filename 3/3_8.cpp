#include <iostream>

using namespace std;
int main()
{
    char answer=' ';

    do{
    cout<<"Enter funt< pound and shilling(funt pound shilling): ";
    int funt_1,shilling_1,pens_1;
    int funt_2,shilling_2,pens_2;
    int funt_3,shilling_3,pens_3;
    cin>>funt_1;
    if (cin.get() != ' ') 
    {
      cout << "expected ' '\n";
    }cin>>shilling_1;
    if (cin.get() != ' ') 
    {
      cout << "expected ' '\n";
    }cin>>pens_1;
    
    cout<<endl<<"Enter funt< pound and shilling(funt pound shilling): ";
    cin>>funt_2;
    if (cin.get() != ' ') 
    {
      cout << "expected ' '\n";
    }cin>>shilling_2;
    if (cin.get() != ' ') 
    {
      cout << "expected ' '\n";
    }cin>>pens_2;
    if (cin.get() != ' ') 
  
    pens_3=pens_1+pens_2;
    shilling_3=shilling_1+shilling_2;
    funt_3=funt_1+funt_2;
    
    do{
        if(pens_3>=12)
        {
            pens_3-=12;
            shilling_3++;
        }
    }while(pens_3>=12);
    do{
        if(shilling_3>=20)
        {
            shilling_3-=20;
            funt_3++;
        }
    }while(shilling_3>=20);
    cout<<endl<<"summa: "<<funt_3<<"."<<shilling_3<<"."<<pens_3<<endl;
        cin>>answer;
    }while(answer!='n');
    return 0;
}