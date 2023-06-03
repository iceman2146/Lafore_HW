#include <iostream>

using namespace std;
struct fraction {
    int chislitel;
    int znamenatel;
    fraction():chislitel(1), znamenatel(1) {}    
    
};
int main()
{
    fraction f1,f2;
    cout<<"Vvedi pervuyu drob:";
    cin >> f1.chislitel;           
    if (cin.get() != '/') 
    {
      cout << "expected /\n";
    }
    cin >> f1.znamenatel;         
    cout<<"Vvedi vtoruyu drob:";
    cin >> f2.chislitel;           
    if (cin.get() != '/') 
    {
      cout << "expected /\n";
    }
    cin >> f2.znamenatel;

    cout<<"summ drobey ravna:";
    if(f1.znamenatel==f2.znamenatel)
        {
            cout<<(f1.chislitel+f2.chislitel)<<"/"<<f1.znamenatel;
        }  
    else
            cout<<f1.chislitel*f2.znamenatel+f2.chislitel*f1.znamenatel<<"/"<<f1.znamenatel*f2.znamenatel;

    return 0;
  }
