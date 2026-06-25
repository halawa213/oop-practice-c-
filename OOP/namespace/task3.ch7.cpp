// Creating namespaces
#include <iostream>
using namespace std;
namespace ns1
{
    int value() { return 5; }
} // End of namespace ns1
namespace ns2
{
     int x = 100;
    double value() { return 2 * x; }
} // End of namespace ns2

const int x =10;
int main()
{
    cout << ns1::value() << '\n'; // Access value function within ns1
    cout << ns2::value() << '\n'; // Access value function within ns2
    cout << ns2::x << '\n';       // Access variable x directly
    cout << x << '\n';       
}
