#include <iostream>
using namespace std;


int main()
{
    float gradus=30;
    
    int answer;
    cout<<"Vvedite 1 for transfer farenheit to the elsius, and 2 for opposite\n";
    cin>>answer;
  
    switch (answer)
    {
    case 1:
    cout<<"Vvedite farenheits\n";
    cin>>gradus;
    cout<<(gradus*9/5)+32<<endl;
    break;
    case 2:
    cout<<"Vvedite Celsius\n";
    cin>>gradus;
    cout<<answer<<endl;
    break;
    default:
    break;
    }
    //cout<<"\nnope";

    return 0;
}