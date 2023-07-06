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
time s_to_time(long seconds)
{
    time temp(seconds);

    return temp;
}
int main()
{
    
    time TIME1;
    long sec;
    TIME1.enter_data();
    cout<<endl<<TIME1.return_seconds()<<endl;
    cout<<"Enter seconds: ";
    cin>>sec;
    TIME1=s_to_time(sec);
    TIME1.print();

    return 0;
}