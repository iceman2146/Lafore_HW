#include <iostream>
using namespace std;

const int SIZE=10;
class safematrix
{
    private:
    int **array;
    public:
    safematrix(){
        array=new int[SIZE][SIZE];
    }
     safematrix(int size_x, int size_y){if(size_x<=10&&size_y<=10)
     {
         array=new int[size_x][size_y];
     }
     else 
     {
        cout<<"ERRROR;"<<endl;
        array=new int[SIZE][SIZE];
     }}
    
    void putel(int x, int y,int val)
    {
        if(x>=SIZE||x<0)||(y>=SIZE||y<0)
        {
            cout<<"ERRROR;";
            exit(0);
        }else{
            array[x][y]=val;
        }
    }
    int getel(int n)
    {
          if(x>=SIZE||x<0)||(y>=SIZE||y<0)
        {
            cout<<"ERRROR;";
            exit(0);
        }else{
           return array[x][y];
        }
    }
};
int main()
{
    safematrix Matrix(5,5);
    //Array={1,2,3,4,5,6,7,8,9,10};
    //cout<<"2="<<Array[1]<<endl;
    Matrix.putel(1,3,7);
    Matrix.putel(18,7);//eror
    cout<<Matrix.getel(3);
    Matrix.getel(18);
    
    //cout<<"11="<<Array[10]<<endl;
    //Array[2]=5;
    //Array[10]=4;
    return 0;
}