#include <iostream> //preprocessor directives
using namespace std;
int main()
{
    // cout << "Abhishek" << endl
    //  << "Dutta";
    // premitive datatypes
    int age = 25;
    char grade = 'A';
    float pi = 3.14;
    bool isSafe = false;
    double price = 100.99;
    cout << sizeof(age) << endl;
    cout << sizeof(grade) << endl;
    cout << sizeof(pi) << endl;
    cout << sizeof(isSafe) << endl; // true->1,false->0
    cout << sizeof(double) << endl;
    return 0;
} // Boilerplate Code
// int->4 bytes,char->1 byte,float->4 bytes,boolean->1 bytes
// double->8 bytes