#include <iostream>
using namespace std;

void changeA(int *ptr) // pass by reference
{
    *ptr = 20;
}

void change(int &b) // pass by reference using alias
{
    b = 20;
}
int main()
{
    // int a = 10;
    // int *ptr = &a;
    // int **parptr = &ptr;
    // cout << ptr << endl;
    // cout << &a << endl; // address of a
    // cout << &ptr << endl;
    // cout << parptr << endl;

    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;
    // cout << **q << endl;
    // cout << p << endl;
    // cout << *q << endl;

    // pass by reference
    // int a = 10;
    // changeA(&a);
    // cout << a << endl;

    // int a = 10;
    // change(a);
    // cout << a << endl;

    // array pointers
    int arr[] = {1, 2, 3, 4, 5};
    // cout << arr << endl; // arr is actualy a pointer so it gives a memory address
    // cout << *arr << endl;

    // pointer arithmetic
    int a = 10;
    int *ptr = &a;
    // cout << ptr << endl;
    // ptr--;
    // cout << ptr << endl;

    // cout << ptr << endl;
    // ptr = ptr + 2;
    // cout << ptr << endl;

    // cout << *arr << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(arr + 2) << endl;
    // cout << *(arr + 3) << endl;

    int *ptr2;                   // 100
    int *ptr1 = ptr2 + 2;        // 108
    cout << ptr1 - ptr2 << endl; // 2
    return 0;
}