#include <iostream>
#include <limits>
class INT
{
    int val;
    public:
    INT():val(0){}
    INT(int init_val):val(init_val){}
    void print(){
        std::cout<<val<<std::endl;
    }
    INT operator+(INT)const;
    INT operator-(INT)const;
    INT operator*(INT)const;
    INT operator/(INT)const;
};
INT INT::operator+(INT a) const {
    
    long temp=val;
   
    temp=temp+(long)a.val;
     if((temp)>std::numeric_limits<int>::max()
        ||(temp)<std::numeric_limits<int>::min())
     {std::cout<<"ERROR";
     temp=0;}
     
        return INT((int)temp);
    }
INT INT::operator-(INT a) const {
    
    long temp=val;
   
    temp=temp-(long)a.val;
     if((temp)>std::numeric_limits<int>::max()
        ||(temp)<std::numeric_limits<int>::min())
     {std::cout<<"ERROR";
     temp=0;}
     
        return INT((int)temp);
    }
INT INT::operator*(INT a) const {
    
    long temp=val;
   
    temp=temp*(long)a.val;
     if((temp)>std::numeric_limits<int>::max()
        ||(temp)<std::numeric_limits<int>::min())
     {std::cout<<"ERROR";
     temp=0;}
     
        return INT((int)temp);
    }
INT INT::operator/(INT a) const {
    
    long temp=val;
   
    temp=temp/(long)a.val;
     if((temp)>std::numeric_limits<int>::max()
        ||(temp)<std::numeric_limits<int>::min())
     {std::cout<<"ERROR";
     temp=0;}
     
        return INT((int)temp);
    }

int main()
{
    INT a;
    INT b(188888888);
    INT c(45745);
    b.print();
    c.print();
   a=b*c;
   a.print();
    return 0;
}