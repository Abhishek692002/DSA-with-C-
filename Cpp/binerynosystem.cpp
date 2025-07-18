#include <iostream>
using namespace std;

// Decimal to Binary
int decToBinary(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

// Binary to Decimal
int binToDecimal(int binNum)
{
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 2;
        ans += (rem * pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    int decNum = 6;
    int binNum = 1101;
    // cout << "The Binary of " << decNum << " is " << decToBinary(decNum);
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << decToBinary(i) << endl;
    // }
    cout << binToDecimal(binNum);
    return 0;
}