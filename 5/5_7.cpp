#include <iostream>
#include <cmath>
double power(double& value,int& step){
    std::cout<<step<<" ";
    double result;
    result=value;
    if(step==1)
    {
        return result;
    }
    else if(step>0&&step!=1)
    {
        for (int i=1;i<(step);i++)
        {
            
            result*=value;
            //
        }
        return result;
    }
    else if(step==0)
    {
        double result=1.0;
        return result;
     }
    else if(step<0)
    {
        for (int i=0;i<(1+abs(step));i++)
        {
            
            result/=value;
            //
        }
        return result;
    } 
    
    return result==555555;
}
float power(float& value,int& step){
    std::cout<<step<<" ";
    float result;
    result=value;
    if(step==1)
    {
        return result;
    }
    else if(step>0&&step!=1)
    {
        for (int i=1;i<(step);i++)
        {
            
            result*=value;
            //
        }
        return result;
    }
    else if(step==0)
    {
        float result=1.0;
        return result;
     }
    else if(step<0)
    {
        for (int i=0;i<(1+abs(step));i++)
        {
            
            result/=value;
            //
        }
        return result;
    } 
    
    return result==555555;
}
int power(int& value,int& step){
    std::cout<<step<<" ";
    int result;
    result=value;
    if(step==1)
    {
        return result;
    }
    else if(step>0&&step!=1)
    {
        for (int i=1;i<(step);i++)
        {
            
            result*=value;
            //
        }
        return result;
    }
    else if(step==0)
    {
        int result=1;
        return result;
     }
    else if(step<0)
    {
        for (int i=0;i<(1+abs(step));i++)
        {
            
            result/=value;
            //
        }
        return result;
    } 
    
    return result==555555;
}
long power(long& value,int& step){
    std::cout<<step<<" ";
    long result;
    result=value;
    if(step==1)
    {
        return result;
    }
    else if(step>0&&step!=1)
    {
        for (int i=1;i<(step);i++)
        {
            
            result*=value;
            //
        }
        return result;
    }
    else if(step==0)
    {
        long result=1;
        return result;
     }
    else if(step<0)
    {
        for (int i=0;i<(1+abs(step));i++)
        {
            
            result/=value;
            //
        }
        return result;
    } 
    
    return result==555555;
}
double power(double&value)
{
    double result;
    result=value;
    result*=result;
    return result;
}
float power(float&value)
{
    float result;
    result=value;
    result*=result;
    return result;
}
int power(int&value)
{
    int result;
    result=value;
    result*=result;
    return result;
}
long power(long&value)
{
    long result;
    result=value;
    result*=result;
    return result;
}
int main()
{
    int step=3;
    int step_1=1;
    int step_0=0;
    int step_neg=-5; 
    double value=2.0;
    std::cout<<"2 v 3: "<<power(value,step)<<std::endl;
    std::cout<<"2 v 1: "<<power(value,step_1)<<std::endl;
    std::cout<<"2 v 0: "<<power(value,step_0)<<std::endl;
    std::cout<<"2 v -2: "<<power(value,step_neg)<<std::endl;
    std::cout<<"2 v 2: "<<power(value)<<std::endl;
    return 0;
    }
