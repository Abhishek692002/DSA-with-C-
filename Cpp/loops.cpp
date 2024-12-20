#include <iostream>
using namespace std;

int main()
{
    // while loops
    // int i = 1;
    // while (i <= 15)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // for loops
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i << " ";
    // }

    // sum of numbers from 1 to n
    // int n = 10;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    //     if (i == 5)
    //     {
    //         break; // terminate the loop
    //     }
    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // cout << "Sum:" << sum << endl;

    // Sum of all odd numbers from 1 To n
    // int n = 10;
    // int oddSum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         oddSum += i;
    //     }
    // }
    // cout << "Sum of odd numbers :" << oddSum;

    // int n = 10;
    // int oddSum = 0;
    // int i = 1;
    // while (i <= n)
    // {
    //     if (i % 2 != 0)
    //     {
    //         oddSum += i;
    //     }
    //     i++;
    // }
    // cout << "Sum:" << oddSum;

    // do
    // {
    //     cout << "Hello!!";
    // } while (3 > 5);

    // while (3 > 5)
    // {
    //     cout << "HELLO";
    // }

    // check if a number is prime or not
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
    // {
    //     cout << "prime\n";
    // }
    // else
    // {
    //     cout << "nonprime\n";
    // }

    // Better approach
    // for(i=2;i*i,=n;i++).........

    // nested loops
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "*****" << endl;
    // }

    // int x = 10;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= x; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // factorial of a number N
    //  int n = 5;
    //  int fact = 1;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      fact *= i;
    //  }
    //  cout << "Factorial of " << n << " is:" << fact << endl;

    // sum of all numbers fom 1 to N which is divisible by 3.
    int sum = 0, n = 10;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "sum :" << sum << endl;
    return 0;
}