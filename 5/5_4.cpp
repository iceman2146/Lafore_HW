#include <iostream>
using namespace std;
struct Distance{
    int feet;
    float inches;
    Distance():feet(0),inches(0.0){}
    Distance(int _feet,float _inches):feet(_feet),inches(_inches){
        do{
            if (inches>12.0)
        {

            feet++;
            inches-=12.0;
        }
        }while(inches>12.0);
    }
    ~Distance(){}
    void print()
    {
        cout<<"Feet: "<<feet;
        cout<<" inches: "<<inches<<endl;
    }
    Distance& operator=(const Distance&);
    
};
Distance& Distance::operator=(const Distance& rhs)
{
    feet=rhs.feet;
    inches=rhs.inches;
    do{
            if (inches>12.0)
        {

            feet++;
            inches-=12.0;
        }
        }while(inches>12.0);
    return *this;
}
Distance bigger_dist(Distance& a,Distance& b) 
{
    Distance temp;
    Distance temp_a,temp_b;
    temp_a.inches=a.feet*12+a.inches;
    temp_b.inches=b.feet*12+b.inches;
    (temp_a.inches>temp_b.inches)?(temp.inches=temp_a.inches):(temp.inches=temp_b.inches);

    do{
            if (temp.inches>12.0)
        {

            temp.feet++;
            temp.inches-=12.0;
        }
        }while(temp.inches>12.0);
    return temp;
}
int main()
{
    Distance a(12,42.0);
    Distance b(11,11.0);
    a.print();b.print();
    Distance c;
    c=bigger_dist(a,b);
    c.print();
    return 0;
}