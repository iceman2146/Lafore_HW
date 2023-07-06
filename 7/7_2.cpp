#include <iostream>
#include <string>
static int counter_of_employe=0;
using namespace std;
class employe{
    private:
    string name;
    long id;
    int counter;
    public:
    employe():name(""),id(0),counter(counter_of_employe){counter_of_employe++;}
    employe(string name,long id):name(name),id(id),counter(counter_of_employe){
        this->name=name;
        this->id=id;
        counter_of_employe++;
    }
    void put_data()const
    {
        cout<<"------------------------------\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"------------------------------\n";
    }
    void get_data()
    {
        _flushall();
        cout<<"Name: ";
        getline(cin,name);
        cout<<"Id: ";
        cin>>id;
        
    }

};
int main(int argc, const char** argv) {
const int max_employee=10;
employe employe_array[max_employee];
int entered_employee=0;
char answer=' ';
do{
    employe_array[entered_employee++].get_data();
    _flushall();
    cout<<"One more? ";cin>>answer;
}
while(answer!='n');
for(int i=0;i<entered_employee;i++)
{
employe_array[i].put_data();
}
    return 0;
}