#include <iostream>
using namespace std;
class date {
  int day;
  int month;
  int year;
  public:
  date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
  }
  void set_data() {
    cout << "enter date in next format: dd/mm/yyyy" << endl;
   cin >> day;           // read the day
    if (cin.get() != '/') // make sure there is a slash between DD and MM
    {
      cout << "expected /\n";
    }
    cin >> month;         // read the month
    if (cin.get() != '/') // make sure there is a slash between MM and YYYY
    {
      cout << "expected /\n";
    }
    cin >> year; // read the year
  }

  void display() const {
    cout << endl << day << "/" << month << "/" << year << endl;
  }
};
int main() {
  date d1(12, 3, 2020);
  d1.set_data();
  d1.display();
  return 0;
}