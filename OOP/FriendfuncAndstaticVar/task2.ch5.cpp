#include <iostream>
using namespace std;
class abc
{
public:
    abc()
    {
        cout << "costructor  ";
    }
    ~abc()
    {
        cout << "destructor  ";
    }
};
void f()
{
    static abc ob;
}

int main()
{
    int x = 0;
    if (x == 0)
    {
        f();
    }
    cout << "end  ";
}