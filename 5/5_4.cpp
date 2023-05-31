#include <iostream>
using namespace std;
struct distance{
    int feet;
    float inches;
    distance():feet(0),inches(0.0){}
    distance(int _feet,float _inches):feet(_feet),inches(_inches){
        if (inches>12.0)
        {
            feet++;
            inches-=12.0;
        }
    }
    distance& operator=(const distance&);
    distance bigger_dist(distance&,distance&)const;
};
distance& distance::operator=(distance& rhs)
{
    feet=rhs.feet;
    inches=rhs.inches;
    if (inches>12.0)
        {
            feet++;
            inches-=12.0;
        }
    return *this;
}
distance distance::bigger_dist(distance& a,distance& b)
{
    distance temp(0,0.0);
    if (a.feet>b.feet)
    {
        temp=a;
    }
    else if(a.feet<b.feet)
    {
        temp=b;
    }
    return temp;
}
int main()
{
    distance a(12,42.0);
    distance b(11,11.0);
    distance c;
    c=bigger_dist(a,b);
    cout<<c<<endl;
    return 0;
}