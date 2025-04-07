#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    // double cgpa;
    double *cgpaPtr;

    Student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Student(Student &orgObj){//deepcopy
    //     this->name = name;
    //     cgpaPtr = new double;
    //     *cgpaPtr = *orgObj.cgpaPtr;
    // }

    ~Student(){//destructor
        cout << "Hii I delete everything";
        delete cgpaPtr;//delete the dynamic memory
    }
    void getInfo(){
        cout << "Name :" << name << endl;
        cout << "CGPA :" << *cgpaPtr << endl;
    }
};
int main()
{
    Student s1("Abhishek", 8.98);
    s1.getInfo();
    // Student s2(s1);
    // *(s2.cgpaPtr) = 8.45;
    // s2.name = "Arpan";
    // s1.getInfo();
    // s2.getInfo();
    return 0;
}