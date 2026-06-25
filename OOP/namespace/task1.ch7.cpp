#include <iostream>
using namespace std;
// first name space
namespace first_space {
    void func() { cout << "inside first_space" << endl; }
}
// second name space
namespace second_space {
    void func() { cout << "Inside second_space" << endl; }
}
using namespace second_space;
int main () {
    
    first_space::func();
    func();

}