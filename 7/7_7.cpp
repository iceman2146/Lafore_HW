#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;
class money{
    private:
    long double money_value;
    string text;
    public:
    money():money_value(0),text(" "){}
    money(long double money):money_value(money),text(" "){}
    money(string t):money_value(0),text(t){}
    void get_string()
    {
    int x = text.find('$'); 
    text.replace(x, 1, ""); 
    x+=text.find('.');
       
	while(x < text.size())        
	{
		text.replace(x, 1, "");  
		x = text.find('.');       
	}

	cout << "text: " << text << endl;
    char *e;
    money_value=(long double)(strtold(text.c_str(),&e));
    }
    long double get_money()
    {
        return money_value;
    }
};


int main()
{
	

	string s1("$1.234.543");
	money m(s1);
    m.get_string();
    cout<<endl<<setw(15)<<m.get_money();
	return 0;
}
