#include <iostream>
using namespace std;
void raschet(float money,int year,float stavka)
{
    float temp=money;

    for(int i=0;i<year;i++)
    {
       temp+=temp*(stavka/100);
    }
    cout<<"You earned afte "<<year<<" "<<temp<<" Pri stavke "<<stavka<<endl;
}
int main()
{
    int year=2;
    float money=3000;
    float stavka=5.5f;

    raschet(money,year,stavka);
    return 0;
}