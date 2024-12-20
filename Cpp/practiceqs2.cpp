#include <iostream>
using namespace std;

int reverse(int num)
{
    int revNum = 0;
    int pow = 100;
    while (num > 0)
    {
        int rem = num % 10;
        num = num / 10;
        revNum = revNum + (rem * pow);
        pow /= 10;
    }
    return revNum;
}

// find the number is power of 2 or not using loop
int isPowerof2(int num)
{
    while (num % 2 == 0)
    {
        num /= 2;
    }

    return (num == 1);
}
int main()
{
    if (isPowerof2(34))
    {
        cout << "The num is power of 2" << endl;
    }
    else
    {
        cout << "it is not" << endl;
    }
    // cout << reverse(543) << endl;
    return 0;
}