#include <iostream>
using namespace std;
enum etype {
  laborer=1,
  secretary,
  manager,
  accountant,
  executive,
  researcher,
  NONE
};
int main() {
  char answer = ' ';
  cout << "Enter first type of employye word:";
  
  etype type;
  switch (answer = cin.get()) {
  case 'l':
    type = laborer;
    break;
  case 's':
    type = secretary;
    break;
  case 'm':
    type = manager;
    break;
  case 'a':
    type = accountant;
    break;
  case 'e':
    type = executive;
    break;
  case 'r':
    type = researcher;
    break;

  default:
    type = NONE;
    break;
  }

  cout<<type<<endl;
  return 0;
}