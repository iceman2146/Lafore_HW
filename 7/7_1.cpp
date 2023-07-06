#include <iostream>
#include <cstring>
using namespace std;
void reversit(char[]);

int main(){
    const int max(20);
    char stroka[max];
    cout<<"Vvedite stroku: \n";
    cin.get(stroka,max);
    reversit(stroka);
    cout<<"Perevernutaya stroka: ";
    cout<<stroka;

    return 0;
}

void reversit(char stroka[])
{
    int size=strlen(stroka);

    for(int j=0;j<size/2;j++)
    {
        char temp=stroka[j];
        stroka[j]=stroka[size-j-1];
        stroka[size-j-1]=temp;
    }
}              