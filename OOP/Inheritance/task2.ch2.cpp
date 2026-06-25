#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string n) : name(n) {}

    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
protected:
    double gpa;

public:
    Student(string n, double g)
        : Person(n), gpa(g) {}

    void showGPA()
    {
        cout << "GPA: " << gpa << endl;
    }
};

class GraduateStudent : public Student
{
private:
    string thesisTitle;

public:
    GraduateStudent(string n,
                    double g,
                    string thesis)
        : Student(n, g),
          thesisTitle(thesis) {}

    void display()
    {
        showName();
        showGPA();

        cout << "Thesis: "
             << thesisTitle << endl;
    }
};

int main()
{

    GraduateStudent gs(
        "Mahmoud",
        3.7,
        "Artificial Intelligence");

    gs.display();

    return 0;
}