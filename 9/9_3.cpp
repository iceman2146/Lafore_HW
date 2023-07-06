#include <iostream>
#include <string>
using namespace std;
const int SIZE=3;
class publication
{
    private:
    string name_publication;
    float price;
    public:
    publication():name_publication("NONE"),price{0.0}{}
    publication(string _name, float _price):name_publication(_name),price(_price){}
    void getdata()
    {
        cout<<"\nenter name: ";cin>>name_publication;
        cout<<"\nenter price: ";cin>>price;
    }
    void putdata()const
    {
        cout<<endl<<"title: "<<name_publication<<"  price: "<<price;
    }
};
class sales
{
    protected:
    float sales_cap[SIZE];
    public:
    void getdata()
    {
        cout<<"\nenter sales: ";
        for(int i=0;i<SIZE;i++)
        {
            cin>>sales_cap[i];
        }
    } 
    void putdata()
    {
        cout<<"\n sales: ";
        for(int i=0;i<SIZE;i++)
        {
            cout<<sales_cap[i]<<" ";
        }
        cout<<endl;
    } 
};
class book:public publication, public sales
{
    private:
    int pages;
    public:
    book():pages(0){}
    book(int _pages):pages{_pages}{}
    void getdata()
    {
        cout<<"\nenter pages: ";cin>>pages;
    }
    void putdata()const
    {
        cout<<endl<<"pages: "<<pages;
    }
};
class type:public publication, public sales
{
    private:
    float minutes;
    public:
    type():minutes(0.0){}
    type(float _minutes):minutes{_minutes}{}
    void getdata()
    {
        cout<<"\nenter minutes: ";cin>>minutes;
    }
    void putdata()const
    {
        cout<<endl<<"pages: "<<minutes;
    }
};

int main()
{
    publication p;
    book b;
    type t;
    p.getdata();
    b.getdata();
    t.getdata();
    p.putdata();
    b.putdata();
    t.putdata();
    
    return 0;
}