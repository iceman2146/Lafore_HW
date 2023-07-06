#include <iostream>

using namespace std;

int main()
{
    std::cout<<"Enter funt< pound and shilling(funt pound shilling): ";
    int funt,shilling,pens;
    cin>>funt;
    if (cin.get() != ' ') 
    {
      cout << "expected ' '\n";
    }cin>>shilling;
    if (cin.get() != ' ') 
    {
      cout << "expected ' '\n";
    }cin>>pens;
    if (cin.get() != ' ') 
    {
      cout << "expected ' '\n";
    }
    pens=pens+shilling*12;
    pens/=2.46;



    cout<<endl<<"new money:"<<funt<<"."<<pens<<endl;
    return 0;

}