#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    // 3.3 Constructors
    Rectangle() : length(0), width(0) {};

    Rectangle(int l, int w) : length(l) , width(w){}
  
    void showVal(); // سيتم تعريفها بالخارج
    void compareArea(Rectangle otherRect) 
    {
        double currentArea = length * width;
        double otherArea = otherRect.length * otherRect.width;

        if (currentArea > otherArea)
            cout << "The current rectangle is bigger." << endl;
        else if (currentArea < otherArea)
            cout << "The passed rectangle is bigger." << endl;
        else
            cout << "Both rectangles have the same area." << endl;
    }

    Rectangle makeDoubleSize() 
    {
        Rectangle temp(length*2,width*2);
        return temp; // إرجاع الكائن
    }
    // -----------------------------------------------------------

    // 3.4 Destructor
    ~Rectangle(){};
};

// 3.6 Member Functions Defined Outside the Class
void Rectangle::showVal()    {
    if (length > 0 && width > 0)
    {
        cout << "length = " << length << endl;
        cout << "width = " << width << endl;
        cout << "Area = " << width * length << endl;
    }
    else
    {
        cout << "**ERROR Wrong input Values**" << endl;
    }
}

int main()
{
    // 3.1 & 3.2 Classes and Objects
    Rectangle ob1;
    Rectangle ob2(3, 10);
    Rectangle ob3(-3, 10);

    Rectangle ob4 = ob2.makeDoubleSize(); // الدالة ترجع كائن جديد ونخزنه في ob4
    ob4.showVal(); 
   
}