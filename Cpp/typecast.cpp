#include <iostream>
using namespace std;

int main()
{
    char grade = 'A';
    int value = grade;     // typeconversion(implicit)
    cout << value << endl; // ASCII value of A->65

    double price = 100.99;
    int newprice = (int)price; // typecasting(explicit)
    cout << newprice << endl;  // 100
    return 0;
}