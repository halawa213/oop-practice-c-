#include <iostream>
using namespace std;

class Shape
{
protected:
    string color;

public:
    Shape(string c = "Black") : color(c) {}

    virtual void Draw()
    {
        cout << "Drawing Shape\n";
    }

    virtual void Erase()
    {
        cout << "Erasing Shape\n";
    }

    virtual double Get_area()
    {
        return 0;
    }

    virtual ~Shape() {}
};

// Rectangle Class
class Rectangle : public Shape
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w, string c = "Red")
        : Shape(c), length(l), width(w) {}

    void Draw() override
    {
        cout << "Drawing Rectangle\n";
    }

    void Erase() override
    {
        cout << "Erasing Rectangle\n";
    }

    double Get_area() override
    {
        return length * width;
    }
};

// Box (Square) Class
class Box : public Shape
{
private:
    int sideLength;

public:
    Box(int s, string c = "Blue")
        : Shape(c), sideLength(s) {}

    void Draw() override
    {
        cout << "Drawing Box\n";
    }

    void Erase() override
    {
        cout << "Erasing Box\n";
    }

    double Get_area() override
    {
        return sideLength * sideLength;
    }
};

// Circle Class
class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int r, string c = "Green")
        : Shape(c), radius(r) {}

    void Draw() override
    {
        cout << "Drawing Circle\n";
    }

    void Erase() override
    {
        cout << "Erasing Circle\n";
    }

    double Get_area() override
    {
        return 3.14 * radius * radius;
    }

    double Get_circumference()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    Rectangle R(10, 5);
    Box B(4);
    Circle C(7);

    Shape* shap_ptr;

    shap_ptr = &R;
    shap_ptr->Draw();
    cout << "Area = " << shap_ptr->Get_area() << "\n\n";

    shap_ptr = &B;
    shap_ptr->Draw();
    cout << "Area = " << shap_ptr->Get_area() << "\n\n";

    shap_ptr = &C;
    shap_ptr->Draw();
    cout << "Area = " << shap_ptr->Get_area() << "\n\n";

    return 0;
}