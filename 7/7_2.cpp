#include <iostream>
#include <string>

using namespace std;
class employe{
    private:
    string name;
    long id;
    public:
    employe():name(""),id(0){}
    employe(string name,long id){
        this->name=name;
        this->id=id;
    }
    string getName(){
        return name;
    }
    long getId(){
        return id;
    }
    void setName(string name){
        this->name=name;
    }
    void setId(long id){
        this->id=id;
    }
    void put_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
    }
    void get_data()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<endl<<"Id: ";
        cin>>id;
    }

};
int main(int argc, const char** argv) {
    employe a[100];
    char answer =' ';
    for(int i=0;i<100;i++)
    {
        cout<<"Enter data of employee "<<i+1<<": ";
        a[i].get_data();
        cout<<"y/n?";
        if (answer=='y')
            break;
        
    }
    for (int i=0;i<100;i++){
        a[i].put_data();
    }
    return 0;
}