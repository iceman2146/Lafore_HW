#include <iostream>

float circarea(float&);
const float PI=3.1417;
int main()
{
    float rad(0.0);
    std::cout<<"Enter radius: ";
    std::cin>>rad;
    std::cout<<std::endl<<"Area is: "<<circarea(rad)<<std::endl;
    return 0;
}
float circarea(float &rad)
{
     float area(0.0);
     area=2*PI*rad;
    return area;
}