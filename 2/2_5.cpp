#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char character;
    cout<<"Enter character: ";

    cin>>character;

    cout<<"character is: "<<islower(character)<<endl;


    return 0;
}