#include <iostream>
using namespace std;
static int i=0;
struct telestation
{
    unsigned int index=0;
    unsigned short city;
    unsigned short station;
    unsigned short abonent;
    telestation():city(0),station(0),abonent(0){i++;index=i;}
    telestation(unsigned short _city,unsigned short _station,unsigned short _abonent):city(_city),station(_station),abonent(_abonent){i++;index=i;}
    //~telestation():
    void print()
    {
        cout<<endl<<"Telephone number of "<<index<<" abonent is: "<<"("<<city<<") "<<station<<"-"<<abonent<<" ."<<endl;
    }
    void enter_number()
    {
        cout<<endl<<"Enter phone number: "; cin>>city>>station>>abonent;
    }

};

int main()
{
    telestation a;
    telestation b(222,547,2146);
    a.enter_number();
    a.print();
    b.print();
    return 0;
}
