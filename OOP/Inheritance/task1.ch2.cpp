#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s)
    {
        cout << "Employee Constructor\n";
    }

    void displayEmployee()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    virtual void work()
    {
        cout << name << " is working.\n";
    }
};

class Manager : public Employee
{
private:
    int teamSize;

public:
    Manager(string n, double s, int t)
        : Employee(n, s), teamSize(t)
    {
        cout << "Manager Constructor\n";
    }

    void work() override
    {
        cout << name << " is managing "
             << teamSize << " employees.\n";
    }
};

int main()
{
    Manager m("Ahmed", 15000, 8);

    m.displayEmployee();
    m.work();

    return 0;
}