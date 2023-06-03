#include <iostream>
#include <string>

using namespace std;

enum side_world { NORTH = 1, EAST, SOUTH, WEST, NONE };
class angle 
{
private:
  int gradus;
  float minutes;
  bool shirota_dolgota;
  side_world side;
  string print_side() const {
    switch (side) {
    case 1:
      return "N";
      break;
    case 2:
      return "E";
      break;
    case 3:
      return "S";
      break;
    case 4:
      return "W";
      break;
    default:
      return "NONE";
      break;
    }
  };

  void set_side(bool shirota_dolgota, int gradus, float minutes)
   {
      if (shirota_dolgota) 
      {
        if (gradus < 0 && gradus > -90)
         {
          side = SOUTH;
          gradus *= -1;
        } 
        else if (gradus > 0 && gradus < 90)
         {
          side = NORTH;
        }
        if (minutes > 60.0) 
        {
          gradus++;
          minutes -= 60.0;
        }
      } 
      else 
      {
        if (gradus < 0 && gradus > -180) 
        {
          side = EAST;
          gradus *= -1;
        } 
        else if (gradus > 0 && gradus < 180) 
        {
          side = WEST;
        }
        if (minutes > 60.0)
        {
          gradus++;
          ;
          minutes -= 60.0;
        }
      }
   }
    public:
      angle() : gradus(0), minutes(0), shirota_dolgota(false), side(NONE) {}
      angle(int _gradus, float _minutes, bool _shirota_dolgota)
          : gradus(_gradus), minutes(_minutes),
            shirota_dolgota(_shirota_dolgota) {
        set_side(_shirota_dolgota, _gradus, _minutes);
      }
    

    void get_angle(int _gradus, float _minutes, bool _shirota_dolg) {
      gradus = _gradus;
      minutes = _minutes;
      shirota_dolgota = _shirota_dolg;
      set_side(shirota_dolgota, gradus, minutes);
    };
    void print_angle() {
      cout << gradus << "\xF8";
      cout << minutes << "'";
      cout << print_side() << endl;
    }
  };

  class Ship {
  private:
    static int counter;
    int ship_id;
    angle dolgata;
    angle shirota;

  public:
    Ship() : dolgata(), shirota() {
      counter++;
      ship_id = counter;
    }
    Ship(angle _dolgta, angle _shirota) : dolgata(_dolgta), shirota(_shirota) {
      counter++;
      ship_id = counter;
    }
    void get_coordinates() {
      int gr_temp = 0;
      float min_temp = 0;
      cout << "vvedite coordinates dolgoty(grad_min): ";
      cin >> gr_temp;

      if (cin.get() != '_') {
        cout << "expected _\n";
      }
      cin >> min_temp;
      dolgata.get_angle(gr_temp, min_temp, false);
      cout << "vvedite coordinates shiroty(grad_min): ";
      cin >> gr_temp;

      if (cin.get() != '_') {
        cout << "expected _\n";
      }
      cin >> min_temp;
      shirota.get_angle(gr_temp, min_temp, true);
    }
    void print_coordinates() {
      cout << ship_id << " Coordinates:" << endl;
      dolgata.print_angle();
      shirota.print_angle();
    }
  };
  int Ship::counter = 0;
  int main() {
    
    Ship ship_1;
    Ship ship_2({45, 55.1, false}, {15, 32.1, true});
    ship_1.get_coordinates();
    ship_2.print_coordinates();
    ship_1.print_coordinates();
    return 0;
  }
