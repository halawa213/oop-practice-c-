#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int grade;
    static int count;

public:
    student() : name("NULL"), grade(0) { count++; }
    student(string n, int g) : name(n), grade(g) { count++; }
    void showInfos()
    {
        cout << "student name: " << name << "\t" << "his/her grade: " << grade << endl;
    }
    static void countStudents()
    {

        cout << "count of students: " << count << endl;
    };
};
int student::count = 0;

int main()
{
    student ob1("ahmed", 88);
    student ob2("mohamed", 88);
    student ob3("ali", 96);
    student::countStudents();
}
