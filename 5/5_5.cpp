#include <iostream>
using namespace std;
struct time{
    int hours;int minutes;int seconds;
    time():hours(),minutes(),seconds(){}
    time(int _hours,int _minutes,int _second):hours(_hours),minutes(_minutes),seconds(_second){}
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

int main()
{
    
    time TIME;

    char answer=' ';
    do
    {
        TIME.enter_data();
        cout<<TIME.return_seconds()<<endl;
cout<<"one more?";
cin>>answer;
    }while(answer!='n');

    return 0;
}