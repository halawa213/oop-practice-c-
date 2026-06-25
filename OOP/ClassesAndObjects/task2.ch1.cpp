#include <iostream>
using namespace std;
class Clock
{
private:
    int hr;
    int mint;
    int sec;
    void adapter()
    {
        mint += sec / 60;
        sec %= 60;
        hr += mint / 60;
        mint %= 60;
        hr %= 24;
    }

public:
    Clock() : hr(0), mint(0), sec(0) {}

    Clock(int h, int m, int s) : hr(h),mint(m),sec(s){}
    
    void showClock24();
    Clock addClock(Clock c);
    ~Clock() {};
};

void Clock::showClock24()
{
    cout << "time is: "
         << hr << " : "
         << mint << " : "
         << sec << endl;
}
Clock Clock ::addClock(Clock c)

{
    Clock temp(hr + c.hr, mint + c.mint, sec + c.sec);
    temp.adapter();
    return temp;
}
int main()
{
    Clock a(23, 59, 59);
    Clock b(a);
    Clock c = a.addClock(b);
    c.showClock24();
}