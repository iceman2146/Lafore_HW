#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

    float celsium,farenheit;
    cout<<"enter celsium: ";
    cin>>celsium;
    farenheit=(celsium*9/5)+32;
    cout<<setw(10)<<left<<"farenheit: "<<farenheit;
   

    return 0;
}