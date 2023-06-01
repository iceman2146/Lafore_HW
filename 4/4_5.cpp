#include <iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;
    date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }   
    void set_data()
    {
        cout<<"Enter the day: ";
        cin>>day;
        cout<<"Enter the month: ";
        cin>>month;
        cout<<"Enter the year: ";
        cin>>year;
    }
    void display()const{
        cout<<endl<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
    date d1(12,3,2020);
    
    d1.display();
    return 0;
}