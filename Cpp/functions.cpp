#include <iostream>
using namespace std;
// function definition
void printHello() // returntype funcName(){....}
{
    cout << "hello";
}

int sum(int a, int b) // a & b=parameters(copy of actual values)
{
    int s = a + b;
    return s;
}

int minValue(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int factN(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f; // last statement of any function
}
int main()
{
    // function call
    // printHello();
    // cout << sum(10, 5) << endl;
    // cout << "Min:" << minValue(4, 5) << endl; // 4 & 5 =arguments(actual value)
    // cout << "Sum :" << sumN(5) << endl;
    cout << "Factorial :" << factN(5) << endl;
    return 0;
}