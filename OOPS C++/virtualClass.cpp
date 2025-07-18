#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
    Parent(){
        cout << "Parent Constructor....\n";
    }
    virtual void getInfo(){
        cout << "Hii i am Parent...\n";
    }
};
class Child:public Parent{
    public:
    Child(){
        cout << "Child Contructor....\n";
    }
    void getInfo(){
        cout << "Hiii i am Child...";
    }
};
int main()
{
    Child c1;
    c1.getInfo();
    return 0;
}