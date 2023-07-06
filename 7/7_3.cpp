
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
struct Distance{
    int feet;
    float inches;
    Distance():feet(0),inches(0.0){}
    Distance(int _feet,float _inches):feet(_feet),inches(_inches){
        Check();
    }
	
    ~Distance(){}
    float return_inches()
	{
		return (inches+12*static_cast<float>(feet))	;
	}
	void Check()
	{
        do{    if (inches>12.0)
        {

            feet++;
            inches-=12.0;
        }
        }while(inches>12.0);
	}
	void print()
    {
        cout<<"Feet: "<<feet;
        cout<<" inches: "<<inches<<endl;
    }
    Distance& operator=(const Distance&);
	void add_dist(Distance, Distance);
    
};
Distance& Distance::operator=(const Distance& rhs)
{
    feet=rhs.feet;
    inches=rhs.inches;
    Check();
    return *this;
}
void Distance::add_dist(Distance dd1, Distance dd2)
{
	inches = dd1.inches + dd2.inches;   
	feet = 0;                           
	Check();								    
	feet += dd1.feet + dd2.feet;        
}
Distance srednee_znachenie(Distance array[], const int& n)
{
	Distance temp;
	
	for(int i=0;i<n;i++)
	{
		temp.inches+=array[i].return_inches();
	}
	temp.Check();
	return temp;
}

///////////////////////////////////////////////////////////
int main()
{
 
	Distance result_srednee_znachenie;
	const int size=3;
	Distance array[size]={{12,42.0},{11,11.0},{11,11.0}};

	for (int i=0;i<size;i++)
	{
		array[i].print();
	}
	result_srednee_znachenie=srednee_znachenie(array,size);
	result_srednee_znachenie.print();

	return 0;
}

