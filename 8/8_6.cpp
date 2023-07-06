#include <iostream>

class Time {
private:
  int seconds, minutes, hours;

public:
  Time() : seconds(0), minutes(0), hours(0) {}
  Time(int h, int m, int s) {
    if (h < 0 || m < 0 || s < 0) {
      std::cout << "ERR";
    } else if (s > 59) {
      s = 59;
      m++;
    }
    if (m > 59) {
      m = 59;
      h++;
    }
    if (h > 24) {
      h = 0;
    }

    seconds = s;
    minutes = m;
    hours = h;
  }
  void check() {
    if (hours < 0 || minutes < 0 || seconds < 0) {
      std::cout << "ERR";
    } 
    if (seconds > 59) {
      seconds = seconds - 60;
      minutes++;
    }
    if (minutes > 59) {
      minutes = minutes - 60;
      hours++;
    }
    if (hours > 24) {
      hours = hours - 24;
    }
  }

  void print() const {
    // time::check();
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
  }

  
  Time operator+(Time &a) const {
    Time temp;
    temp.hours = hours + a.hours;
    temp.minutes = minutes + a.minutes;
    temp.seconds = seconds + a.seconds;
    temp.check();
    return temp;
  }
  void operator++()
   {
    ++seconds;
    check();
    
  }
  void operator++(int)
   {
    seconds++;
    check();
    
  }
  void operator--()
   {
    --seconds;
    check();
    
  }
  void operator--(int)
   {
    seconds--;
    check();
    
  }
  Time operator-(Time &a) const {
    Time temp;
    
    temp.hours = hours - a.hours;
    temp.minutes = minutes - a.minutes;
    temp.seconds = seconds - a.seconds;
    temp.check();
    return temp;
  }

 Time operator*(float&a) const {
    Time temp;
    temp.seconds=seconds+60*minutes+3600*hours;
    temp.seconds*=a;
    
    temp.check();
    return temp;
  }
};


int main() {
 
  Time b(2, 22, 14);
  Time c(1, 23, 14);
  float a=3.0;
  c=c*a;

  c.print();
  c=c-b;
  c.print();
  return 0;
}