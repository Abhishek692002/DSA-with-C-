#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){
        cout << "Parent Constructor is called.....\n";
    }
    ~Person(){
        cout << "Parent Destructor...\n";
    }
};
class Student : public Person{
    public:
    int rollNo;

    Student(){
        cout << "Child Constructor is called....\n";
    }
    ~Student(){
        cout << "Child Desctructor...\n";
    }
    void getInfo(){
        cout << "Name :" << name << endl;
        cout << "Age  :" << age << endl;
        cout << "Roll No.:" << rollNo << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Abhishek";
    s1.age = 22;
    s1.rollNo = 2;
    s1.getInfo();
    return 0;
}