#include <bits/stdc++.h>
using namespace std;
int sumOfN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfN(n - 1);
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
void printNumInc(int x) // increasing order
{
    if (x == 5)
    {
        cout << x << " ";
        return;
    }
    cout << x << " ";
    printNumInc(x + 1);
}
void printNum(int n) // decreasing order
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printNum(n - 1);
}
int main()
{
    int n = 5;
    // printNum(n);
    // printNumInc(1);
    // cout << factorial(n);
    cout << sumOfN(n);
    return 0;
}