#include <iostream>

using namespace std;

int main()
{
    int chislitel_1 = 0;
    int chislitel_2 = 0;
    int znamenatel_1 = 0;
    int znamenatel_2 = 0;
    cout<<"Vvedi pervuyu drob:";
    cin >> chislitel_1;           
    if (cin.get() != '/') 
    {
      cout << "expected /\n";
    }
    cin >> znamenatel_1;         
    cout<<"Vvedi vtoruyu drob:";
    cin >> chislitel_2;           
    if (cin.get() != '/') 
    {
      cout << "expected /\n";
    }
    cin >> znamenatel_2;

    cout<<"summ drobey ravna:";
    if(znamenatel_1==znamenatel_2)
        {
            cout<<(chislitel_1+chislitel_2)<<"/"<<znamenatel_1;
        }  
    else
            cout<<chislitel_1*znamenatel_2+chislitel_2*znamenatel_1<<"/"<<znamenatel_1*znamenatel_2;

    return 0;
  }
