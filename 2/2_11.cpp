#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct adress{
    string city;
    string street;
    int building;
    adress():city(""),street(""),building(0){}
    adress(string c,string s,int n):city(c),street(s),building(n){}
    adress(string c,string s):city(c),street(s),building(0){}
    void print_first()
    {
      cout<<setw(12)<<setiosflags(ios::left)<<street;
      if(building!=0)cout<<setw(12)<<setiosflags(ios::left)<<building;  
    }
    void print_last()
    {
      cout<<setw(18)<<setiosflags(ios::left)<<city;  
    }
    void print()
    {
        print_last();
        print_first();
        
    }

};
struct full_name{
    string first_name;
    string last_name;
    
    full_name():first_name(""),last_name(""){}
    full_name(string f,string l):first_name(f),last_name(l){}
    void print_first()
    {
      cout<<setw(12)<<setiosflags(ios::left)<<first_name;  
    }
    void print_last()
    {
      cout<<setw(12)<<setiosflags(ios::left)<<last_name;    
    }
    void print()
    {
        print_last();
        print_first();
        
    }

};

struct data
{
    full_name FN;
    adress A;
    data():FN(), A(){}
    data(full_name n,adress a):FN(n), A(a){}
    void print()
    {
        cout<<endl;
       FN.print();A.print();
    }
        
};
int main()
{
    data utilit({"First name","Last name"},{"City","Street"});
    data data_1({"Ivan","Petrov"},{"Klin","Lenina",7});
    data data_2({"Petr","Ivanov"},{"Moscow","Pushkina",16});
    data data_3({"Svetlana","Smirnova"},{"Saint-Petersburg","Shorsa",4});
    data data_4({"Kseniya","Volkova"},{"Ivanovo","----",20});
    utilit.print();
    cout<<endl<<"--------------------------------------------------------";
    data_1.print();
    data_2.print();
    data_3.print();
    data_4.print();
    return 0;
}