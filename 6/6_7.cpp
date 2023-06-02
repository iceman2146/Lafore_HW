#include <iostream>
#include <string>


using namespace std;


enum side_world{
    NORTH=1,
    EAST,
    SOUTH,
    WEST,
    NONE
};
class angle
{
    private:
    int gradus;
    float minutes;
    bool shirota_dolgota;
    side_world side;
    string print_side() const 
    {
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

    public:
    angle(): gradus(0), minutes(0), shirota_dolgota(false), side(NONE){}
    angle(int _gradus, float _minutes, bool _shirota_dolgota): gradus(_gradus), minutes(_minutes), shirota_dolgota(_shirota_dolgota){
        if(shirota_dolgota)
        {
            if(gradus<0&&gradus>-90)
            {
                side=SOUTH;
                gradus*=-1;
            }
            else if(gradus>0&&gradus<90)
            {
                side=NORTH;
            }
            if(minutes>60.0)
            {
                gradus++;
                minutes-=60.0;
            }
        }
        else
        {
            if(gradus<0&&gradus>-180)
            {
                side=EAST;
                gradus*=-1;
            }
            else if(gradus>0&&gradus<180)
            {
                side=WEST;
            }
            if(minutes>60.0)
            {
                gradus++;;
                minutes-=60.0;
            }
        }
        
    }
    
    void get_angle(int _gradus, float _minutes, bool _shirota_dolg)
    {
        gradus=_gradus;
        minutes=_minutes;
        shirota_dolgota=_shirota_dolg;
    };
    void print_angle()
    {
        cout<<gradus<<"\xF8";
        cout<<minutes<<"'";
        cout<<print_side()<<endl;
    }
};

int main()
{
    angle   a;
    angle b(60,54.92,true);
    a.print_angle();
    b.print_angle();
    return 0;
}
