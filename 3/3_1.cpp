#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int chislo = 7;
    int strok = 20;
    int stolbcov = 10;
    int  index=1;
    // cout<<"Enter your number: ";
    // cin>>chislo;cout<<endl;
    for (int j = 0; j < strok; j++)
    {
        for (int i = 0; i < stolbcov; i++)
        {
            cout << left << chislo * index++ << " ";
        }
        cout << endl;
    }

    return 0;
}