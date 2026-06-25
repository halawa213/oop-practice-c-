#include <iostream>
using namespace std;
class Distance
{
private:
    double feet;
    double inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(double f, double i) : feet(f), inches(i) {}

    void setDistance(double F, double I);
    void getDistance();
    Distance operator+(const Distance& c);
    void operator++();
};

void Distance ::setDistance(double F, double I)
{
    feet = F;
    inches = I;
}
void Distance ::getDistance()
{
    cout << "feets: " << feet << "\t" << "inches: " << inches << endl;
}
Distance Distance :: operator+(const Distance& c){
 
        Distance temp(feet + c.feet, inches + c.inches);
        return temp;
  
}
void Distance :: operator++(){
  Distance ob(feet++,inches++);
 }

 int main()
{
    Distance b(12, 13.5);
    Distance c(11, 10);
     ++c;
    Distance d = b + c;
    d.getDistance();
}