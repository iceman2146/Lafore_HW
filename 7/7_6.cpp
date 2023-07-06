
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum Suit { clubs, diamonds, hearts, spades };
const int jack  = 11;
const int queen = 12;
const int king  = 13;
const int ace   = 14;
/////////////////////////////////////////////////////////////
class card
{
private:
	int number;
	Suit suit;
public:
	card()                    
	{ }						  
	void set(int n, Suit s)   
	{ 						  
		suit = s; number = n; 
	}						  
	void display();           
};
/////////////////////////////////////////////////////////////
void card::display()
{
	if(number >= 2 && number <= 10)
		cout << number;
	else
	{
		switch(number)
		{
		case jack:  cout << 'J'; break;
		case queen: cout << 'Q'; break;
		case king:  cout << 'K'; break;
		case ace:   cout << 'A'; break;
		}
	}
	switch(suit)
	{
	case clubs:		cout << static_cast<char>(5); break;
	case diamonds:	cout << static_cast<char>(4); break;
	case hearts:	cout << static_cast<char>(3); break;
	case spades:	cout << static_cast<char>(6); break;
	}
}
/////////////////////////////////////////////////////////////
int main()
{
    const int cards=52;
    const int max_players=4;
    const int cards_for_player=13;

	card deck[cards];
	card players[max_players][cards_for_player];

    int i,j;
	cout << endl;
	for(j = 0; j < 52; j++)   
	{
		int num = (j % 13) + 2;
		Suit su = Suit(j / 13);
		deck[j].set(num, su);
	}
	
	cout << "start coloda:\n";
	for(j = 0; j < 52; j++)
	{
		deck[j].display();
		cout << "  ";
		if(!((j + 1) % 13))   
			cout << endl;
	}
	srand(time(NULL));       
	for(j = 0; j < cards; j++)
	{
		int k = rand() %cards;  
		card temp = deck[j];  
		deck[j] = deck[k];
		deck[k] = temp;
	}
	
	cout << "\nrandomized coloda:\n";
	for(j = 0; j < cards; j++)
	{
		deck[j].display();
		cout << "  ";
		if(!((j + 1) % 13))   
			cout << endl;
	}
    int count=0;
    for(i=0;i<max_players;i++)
    {
        for(j=0;j<cards_for_player;j++)
        {
            players[i][j]=deck[count];
            count++;
        }
    }
    for(i = 0; i < max_players; i++)
	{
        cout<<"\nColoda of "<<i+1<<" player: ";
        for(j = 0; j < cards_for_player; j++)
            {
		players[i][j].display();
		cout << "  ";}   
		cout << endl;
	}

	return 0;
}
