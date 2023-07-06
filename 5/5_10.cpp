#include <iostream>
using namespace std;
int global_value=0;
static int static_value=0;
void enter_counter_static()
{
    
    static_value++;
}

void enter_counter_global()
{
    global_value++;
}
int main()
{
    
    int n=10;
    for (int i=0;i<n;i++)
    {
        enter_counter_static();
        enter_counter_global();
    }
    cout<<"static: "<<static_value<<endl<<"global: "<<global_value<<endl;

    return 0;
}