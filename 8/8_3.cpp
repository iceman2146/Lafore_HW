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

  Time addTime(const Time &a) const {
    Time temp;
    temp.hours = hours + a.hours;
    temp.minutes = minutes + a.minutes;
    temp.seconds = seconds + a.seconds;
    temp.check();
    return temp;
  }
  Time operator+(Time &a) const {
    Time temp;
    temp.hours = hours + a.hours;
    temp.minutes = minutes + a.minutes;
    temp.seconds = seconds + a.seconds;
    temp.check();
    return temp;
  }
};

int main() {
  Time a;
  a.print();
  Time b(14, 43, 67);
  Time c(2, 23, 14);
  a = c+b;
  b.print();
  c.print();
  a.print();
  return 0;
}