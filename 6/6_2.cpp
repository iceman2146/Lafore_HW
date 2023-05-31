#include <iostream>
class toolBooth
{
    unsigned int cars;
    double cash;
    public:
    toolBooth():cars(0),cash(){}
    void print()const;
    void payingCar();
    void nopayingCar();
};

void toolBooth::print()const
{
    std::cout<<"cars drives: "<<cars<<std::endl;
    std::cout<<"cash: "<<cash<<" $"<<std::endl;
} 
void toolBooth::payingCar()
{
    cars++;
    cash+=0.5;
}
void toolBooth::nopayingCar()
{
    cars++;
}

int main(){
    toolBooth a1;
    a1.print();
    for(int i=1;i<667;i++){
    a1.payingCar();}
     for(int i=1;i<60;i++){
    a1.nopayingCar();}
    a1.print();
    return 0;
}