#include <iostream>
using namespace std;

int Max(int arr[],const int& n)
{
    int temp=0;
    for (int i=0;i<n;i++)
    {
        if(temp<arr[i])
        temp=arr[i];
    }
    return temp;
}

int main()

{
    const int SIZE=4;
    int array[SIZE];
    for (int i=0;i<SIZE;i++)
    {
        cin>>array[i];
    }

    
    cout<<endl<<Max(array,SIZE);
    return 0;
}