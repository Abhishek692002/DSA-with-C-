#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

// 1. print the maximum subarray sum
int maxSubarraysum(vector<int> &nums, int n)
{
    //**print the subarrays
    // for (int start = 0; start < nums.size(); start++)
    // {
    //     for (int end = start; end < nums.size(); end++)
    //     {
    //         for (int i = start; i <= end; i++)
    //         {
    //             cout << nums[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    //**Brute force approach
    // int maxSum = INT_MIN;
    // for (int start = 0; start < n; start++)
    // {
    //     int currSum = 0;
    //     for (int end = start; end < n; end++)
    //     {
    //         currSum += nums[end];
    //         maxSum = max(maxSum, currSum);
    //     }
    // }
    // return maxSum;

    //**kadan's Algorithm
    int maxSum = INT_MIN, currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += nums[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

// 2. print the second largest element in an array
int largestValue(vector<int> &nums, int sz)
{
    int largest = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        largest = max(nums[i], largest);
    }
    return largest;
}
// bruteforce approach
int secondLargest_brute(vector<int> &nums, int sz)
{
    sort(nums.begin(), nums.end());
    int largest = largestValue(nums, sz);
    int slargest;
    for (int i = sz - 2; i >= 0; i--)
    {
        if (nums[i] != largest)
        {
            slargest = nums[i];
            break;
        }
    }
    return slargest;
}
// better approch
int secondLargest_better(vector<int> &nums, int sz)
{
    int largest = nums[0], slargest = -1;
    for (int i = 0; i < sz; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    for (int i = 0; i < sz; i++)
    {
        if (nums[i] > slargest && nums[i] != largest)
            slargest = nums[i];
    }
    return slargest;
}
int main()
{
    // 1.
    //  vector<int> nums = {1, 2, 3, 4, 5};
    //  int n = nums.size();
    //  cout << "Max Subarray sum=" << maxSubarraysum(nums, n) << endl;

    // 2.
    vector<int> nums = {1, 2, 4, 7, 7, 5};
    int sz = nums.size();
    // cout << "Second largest element in the array :" << secondLargest_brute(nums, sz) << endl;

    cout << "Second largest element :" << secondLargest_better(nums, sz) << endl;
    return 0;
}