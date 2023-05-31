#include <iostream>
class INT
{
    int val;
    public:
    INT():val(0){}
    INT(int init_val):val(init_val){}
    void print(){
        std::cout<<val<<std::endl;
    }
    INT sum(INT);
};
INT INT::sum(INT second)
{
    INT first;
    first.val=val+second.val;
    return first;
}

int main()
{
    INT a;
    INT b(1);
    INT c(2);
    b.print();
    c.print();
    a=b.sum(c);
    a.print();
b.print();
    c.print();
    return 0;
}