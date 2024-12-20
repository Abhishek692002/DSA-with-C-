#include <iostream>
using namespace std;

int main()
{
    // Arithmetic operators
    //  int a = 23;
    //  float b = 2.5;
    //  cout << "Sum:" << a + b << endl;
    //  cout << "Difference:" << a - b << endl;
    //  cout << "Multipication:" << a * b << endl;
    //  cout << "Division:" << a / b << endl;
    //  cout << "Modulo:" << a % b << endl;
    //  cout << (5 / (double)2) << endl;
    //  int value = 5 / (double)2;
    //  cout << value << endl;

    // Relational operators(return only boolean values)
    // cout << (3 < 5) << endl;
    // cout << (3 > 5) << endl;
    // cout << (3 <= 3) << endl;
    // cout << (3 >= 3) << endl;
    // cout << (3 == 3) << endl;
    // cout << (3 == 5) << endl;
    // cout << (3 != 5) << endl;

    // Logical operators
    // cout << !(3 > 1) << endl;             // logical not:true->false,false->true
    // cout << ((3 < 1) || (3 < 5)) << endl; // logical or: if any true->true
    // cout << ((3 > 1) && (5 > 3)) << endl; // logical and:if all true->true,if any false->false

    // int a, b;
    // cout << "Emter two numbers :";
    // cin >> a >> b;
    // int sum = a + b;
    // cout << "Sum:" << sum << endl;

    // unary operators(uses 1 operand)
    int a = 10;
    int b = a++; // post increment
    cout << b << endl;
    cout << a << endl;
    int c = 12;
    int d = ++c; // pre increment
    cout << c << endl;
    cout << d << endl;
    int e = 15;
    int f = e--; // post decrement
    cout << e << endl;
    cout << f << endl;
    int g = 15;
    int h = --g; // pre decrement
    cout << g << endl;
    cout << h << endl;
    return 0;
}