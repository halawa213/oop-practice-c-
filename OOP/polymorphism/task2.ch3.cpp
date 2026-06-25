#include <iostream>
using namespace std;

// الفئة الأساسية (Base Class)
class Shape {
public:
    // إضافة virtual هنا تجعل البرنامج يختار الدالة بناءً على نوع الكائن الفعلي في الذاكرة
    virtual void draw() {
        cout << "Shape\n";
    }
};

// الفئة المشتقة (Derived Class)
class Circle : public Shape {
public:
    // إعادة تعريف الدالة (Method Overriding)
    void draw() override { 
        cout << "Circle\n";
    }
};

int main() {
    Shape a;
    Circle b;
    Shape *ptr;
    ptr =&a;
    ptr->draw(); 
    ptr =&b;
    ptr->draw(); 
    
}