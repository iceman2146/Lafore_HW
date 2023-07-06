#include <iostream>
using namespace std;
int raschet(float vklad,float target, float stavka)
{
    int temp=0;

    
    do{
        vklad+=vklad*(stavka/100);
        temp++;
    }while(vklad<=target);
    return temp;
}
int main()
{
    float target=5124;
    float money=3000;
    float stavka=5.5f;

    cout<<endl<<raschet(money,target,stavka);
    return 0;
}