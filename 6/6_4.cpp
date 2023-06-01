#include "iostream"

using namespace std;
class employee{
    
    int id;
    float salary;
    public:
    employee(int _id, float _salary):id(_id),salary(_salary){};
    employee():id(0),salary(0.0){};
    void set_data(){
        cout<<"\nEnter employee id: ";cin>>id;
        cout<<"\nEnter employee salary: ";cin>>salary;
    };
    void print_data()const{
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    };
    
};

int main(){
    employee e1(100, 10000);
    employee e2;
    e2.set_data();
    e1.print_data();
    e2.print_data();
    return 0;
}