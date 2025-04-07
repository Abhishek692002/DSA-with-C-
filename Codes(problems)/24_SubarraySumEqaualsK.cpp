#include <bits/stdc++.h>
using namespace std;

int subarraySum_BruteForce(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    cout << subarraySum_BruteForce(nums, 3) << endl;
    ;
    return 0;
}