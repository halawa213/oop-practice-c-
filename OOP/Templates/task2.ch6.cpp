#include <iostream>
using namespace std;

template <class T>
class Data
{
private:
    T value;

public:
    Data() : value(0){}
    Data(T v) : value(v){}
 

    void show()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Data<int> ob1(10);
    Data<double> ob2(3.14);
    Data<string> ob3("Mahmoud");

    ob1.show();
    ob2.show();
    ob3.show();

    return 0;
}