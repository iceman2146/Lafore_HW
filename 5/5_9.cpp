#include <iostream>
using namespace std;
struct time{
    int hours;int minutes;int seconds;
    time():hours(),minutes(),seconds(){}
    time(int _hours,int _minutes,int _second):hours(_hours),minutes(_minutes),seconds(_second){correct_data();}
    time(long s):hours(0),minutes(0),seconds((int)s)
    {
 correct_data();
    }
    void print()
    {
        cout<<hours<<":"<<minutes<<":"<<seconds<<"."<<endl;
    }
    void enter_data()
    {
        
        cout<<"Enter Time in format(h:m:n): ";
        cin >> hours;           
    if (cin.get() != ':') 
    {
      cout << "expected :\n";
    }
    cin >>minutes;
    if (cin.get() != ':') 
    {
      cout << "expected :\n";
    }
    cin>>seconds;  
    correct_data();
    }
    int return_seconds()
    {
        return(seconds+minutes*60+hours*3600);
    }
    void correct_data()
    {
        do{
        if (seconds>=60)
        {

            minutes++;
            seconds-=60;
        }
        }while(seconds>=60);
        do{
        if (minutes>=60)
        {

            hours++;
            minutes-=60;
        }
        }while(minutes>=60);
    }

};
void swap(time&a,time&b)
{
    time temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"swap"<<endl;
}
void print(time&a,time&b)
{
    cout<<"a = "; a.print();
    cout<<"b = "; b.print();
}
int main()
{
    time a(2,58,66);
    time b(1,48,23);
    print(a,b);
    swap(a,b);
    print(a,b);
    return 0;
}