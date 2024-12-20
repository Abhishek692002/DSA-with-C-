#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    // // int marks[5] = {99, 100, 98, 88, 87};
    // double price[] = {99.98, 105.67, 30.00};

    // // cout << marks[0] << endl;
    // // cout << marks[1] << endl;
    // // cout << marks[2] << endl;
    // // cout << marks[3] << endl;
    // // cout << marks[4] << endl;

    // int marks[5];
    // int sz = sizeof(marks) / sizeof(int);
    // // cout << sz << endl;

    // for (int i = 0; i < sz; i++)
    // {
    //     cin >> marks[i];
    // }

    // for (int i = 0; i < sz; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    // Find the smallest and largest value in an array

    int size = 6;
    int nums[size] = {5, -23, 22, 1, -15, 24};

    int smallest = INT_MAX; //+infinity
    int largest = INT_MIN;  //-infinity

    int idx1, idx2;
    for (int i = 0; i < size; i++)
    {
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        //     idx = i;
        // }

        smallest = min(nums[i], smallest);
        if (smallest == nums[i])
            idx1 = i;

        largest = max(nums[i], largest);
        if (largest == nums[i])
            idx2 = i;
    }
    cout << "Smallest is " << smallest << " at index " << idx1 << endl;
    cout << "Largest is " << largest << " at index " << idx2 << endl;
    return 0;
}