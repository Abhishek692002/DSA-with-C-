#include <iostream>
using namespace std;
int main()
{
    // 1st approach
    // int n = 7;
    // int count = 0;
    // for (int i = 1; i <= 7; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //     }
    // }
    // if (count == 2)
    // {
    //     cout << "prime\n";
    // }
    // else
    // {
    //     cout << "non-prime\n";
    // }

    // 2nd approach
    // int n = 7;
    // bool isPrime = true;
    // for (int i = 2; i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime == true)
    //     cout << "Prime\n";
    // else
    //     cout << "Non-prime\n";

    // better approach
    int n = 7;
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
        cout << "Prime\n";
    else
        cout << "Non-prime\n";
    return 0;
}