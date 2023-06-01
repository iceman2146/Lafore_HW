#include <iostream>
#include <string>
using namespace std;
enum etype {
  laborer = 1,
  secretary,
  manager,
  accountant,
  executive,
  researcher,
  NONE
};

class date {
  int day;
  int month;
  int year;

public:
  date(int _d, int _m, int _y) : day(_d), month(_m), year(_y) {}
  date() : day(0), month(0), year(0) {}

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

class employee {

  int id;
  float salary;
  date date_of_admission;
  etype type;
  void set_type_job() {
    cout << "\nEnter first type of employee status: ";
    char answer = ' ';
    cin >> answer;
   
    switch (answer) {
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
  };
  string prit_type_job() const {

    switch (type) {
    case 1:
      return "laborer";
      break;
    case 2:
      return "secretary";
      break;
    case 3:
      return "manager";
      break;
    case 4:
      return "accountant";
      break;
    case 5:
      return "executive";
      break;
    case 6:
      return "researcher";
      break;
    default:
      return "NONE";
      break;
    }
  };

public:
  employee(int _id, float _salary, date _date, etype _type)
      : id(_id), salary(_salary), date_of_admission(_date), type(_type){};
  employee() : id(0), salary(0.0), date_of_admission(), type(NONE){};

  void set_data() {
    cout << "\nEnter employee id: ";
    cin >> id;
    cout << "\nEnter employee salary: ";
    cin >> salary;
    cout << "\nEnter employee date of admission: ";
    date_of_admission.set_data();
    
    set_type_job();
  };
  void print_data() const {
    cout << "ID: " << id << endl;
    cout << "Salary: " << salary << endl;
    cout << "Date of admission: ";
    date_of_admission.display();
    cout << "Type of employee: " << prit_type_job() << endl;
  };
};

int main() {
  employee e1(666, 10000,{12,10,2015},accountant);
  employee e2;
  e2.set_data();

  e1.print_data();
  e2.print_data();
  return 0;
}