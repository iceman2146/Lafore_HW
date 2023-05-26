#include <iostream>
using namespace std;
static int i=0;
struct point
{
    int x;
    int y;
    int index;
    point():x(0),y(0){i++;index=i;}
    point(int _x,int _y):x(_x),y(_y){i++;index=i;}
    //~telestation():
    void print()
    {
        cout<<endl<<"Point number "<<index<<" in x:"<<x<<" y: "<< y<<endl;
    }
    void enter_point()
    {
        cout<<endl<<"Enter point: "; cin>>x>>y;
    }
    void sum(point a,point b)
    {
        x=a.x+b.x;
    y=a.y+b.y;
    }

};


int main()
{
    point a(3,4);
    point b(5,7);
    point c;
    //b.enter_point();
    c.sum(a,b);
    c.print();
    return 0;
}
