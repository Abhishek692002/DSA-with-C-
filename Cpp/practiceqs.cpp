#include <iostream>
using namespace std;

// calculate the sum of the digits of a number
int sumofDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        n = n / 10;
        sum += remainder;
    }
    return sum;
}

// Calculate nCr binomial coefficient for n&r
// nCr=(n!/(r!*(n-r)!))

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

// Check if a function is prime or not
void checkPrime(int n)
{
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
    {
        cout << "The no is prime." << endl;
    }
    else
    {
        cout << "The no is not prime." << endl;
    }
}

// print all prime numbers from 2 to N
bool print_prime(int n)
{
    bool isPrime = true;
    for (int j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
        return true;
}

// print the fibonacci series
int print_fibonacci(int n)
{
    int a = 0, b = 1, c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << " ";
            continue;
        }
        if (i == 2)
        {
            cout << b << " ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;

        cout << c << " ";
    }
}

// print the nth fibonacci number
int print_nthfibo(int n)
{
    int x = 0, y = 1, z;
    if (n == 0)
        return x;
    if (n == 1)
        return y;
    for (int i = 2; i <= n; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return z;
}
int main()
{
    // int n = 8, r = 2;
    // cout << nCr(n, r) << endl;
    // cout << "Sum of the digits :" << sumofDigit(175) << endl;
    // checkPrime(7);
    // int N = 20;
    // for (int i = 2; i <= N; i++)
    // {
    //     if (print_prime(i))
    //         cout << " " << i;
    // }
    // cout << print_fibonacci(9);
    // cout << print_nthfibo(10);
    return 0;
}