#include <iostream>
using namespace std;


int main()
{
    float gradus=30;
    
    int answer;
    cin>>answer;
    switch (answer)
    {
    case 1:
    cout<<(gradus*9/5)+32<<endl;
    break;
    case 2:
    cout<<answer<<endl;
    break;
    default:
    break;
    }
    cout<<"\nnope";

    return 0;
}