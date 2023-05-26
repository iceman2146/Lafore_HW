#include <iostream>
#include <iomanip>

using namespace std;

const float pound=1.487;
const float frank=0.172;
const float yen=0.00955;
const float mark=0.584;
int main()
{

    float dollar;
    cout<<"enter how much dollars you have: ";
    cin>>dollar;
    cout<<"you havee: "<<endl;
    cout<<setw(10)<<left<<"pound:"<<right<<setprecision(4)<<pound*dollar<<endl;
    cout<<setw(10)<<left<<"frank:"<<right<<setprecision(4)<<frank*dollar<<endl;
    cout<<setw(10)<<left<<"yen:"<<right<<setprecision(4)<<yen*dollar<<endl;
    cout<<setw(10)<<left<<"mark:"<<right<<setprecision(4)<<mark*dollar<<endl;

    return 0;
}