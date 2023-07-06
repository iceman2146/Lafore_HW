#include <iostream>
using namespace std;
unsigned int factor(unsigned int);

int main()
{
    unsigned int a=1;
    do{
    cin>>a;
    cout<<factor(a);
    cout<<endl;}while(a!=0);
    return 0;
}
unsigned int factor(unsigned int a)
{
	if(a > 1)
		return a * factor(a - 1);	 
	else
		return 1;
}