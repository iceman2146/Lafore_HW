#include <iostream>

using namespace std;

class fraction {
    static int counter;
    int nomer;
    int chislitel;
    int znamenatel;
    public:
    fraction():chislitel(1), znamenatel(1){
        counter++;
        nomer   = counter;
    }    
    void get_fraction()
    {
    cout<<"Vvedi "<<nomer<<" drob:";
    cin >> chislitel;           
    if (cin.get() != '/') 
    {
      cout << "expected /\n";
    }
    cin >>znamenatel;       
    }
    void print_fraction()
    {
        cout <<nomer<<":"<< chislitel << "/" << znamenatel;
    }
    void sum(fraction*,fraction*);
    

    
};
void fraction::sum(fraction *f1,fraction *f2)
{
   if(f2->znamenatel == f1->znamenatel){
       f1->chislitel = f1->chislitel + f2->chislitel;
       f1->znamenatel = f1->znamenatel;
   } 
   else{
   chislitel = f1->chislitel * f2->znamenatel+ f2->chislitel * f1->znamenatel;
   znamenatel = f1->znamenatel * f2->znamenatel;
   }
    
}
int fraction::counter = 0;
int main()
{
    fraction f1,f2,f3;
    f1.get_fraction();
    f2.get_fraction();
    f1.print_fraction();
    f2.print_fraction();
    f3.sum(&f1,&f2);
    cout<<"summ drobey ravna:";
    f3.print_fraction();

    return 0;
  }
