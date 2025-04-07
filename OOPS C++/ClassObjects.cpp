#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    // properties/attributes
private:
    double salary;
public:
    Teacher()
    {
        // cout << "Hi!!! I am a constructor" << endl;
        department = "Computer Science";
    }
    Teacher(string n,string d,string s){
        name = n;
        department = d;
        subject = s;
    }
    string name;
    string department;
    string subject;

    // methods
    void changeDept(string newDept)
    {
        department = newDept;
    }

    // setter
    void setSalary(double s) // to set the private data
    {
        salary = s;
    }

    // getter
    double getSalary() // to get the private data
    {
        return salary;
    }
    void getInfo(){
        cout << "Name :" << name << endl;
        cout << "Department :" << department << endl;
        cout << "Subject :" << subject << endl;
    }
};
int main()
{
    Teacher t1("Abhishek Dutta","Computer Science","Java");
    t1.getInfo();
    // t1.name = "Abhishek Dutta";
    // t1.subject = "Cpp";
    // t1.department = "Computer Science";
    // t1.changeDept("Computer Application");
    // cout << t1.department << endl;

    // cout << t1.department << endl;
    // t1.setSalary(25000);
    // cout << t1.getSalary() << endl;

    // Teacher t2;
    // cout << t2.department << endl;
    return 0;
}