#include <bits/stdc++.h>

using namespace std;
int majorityElement_brute(vector<int> &nums) // O(n^2)
{
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums)
        {
            if (el == val)
                freq++;
        }
        if (freq > n / 2)
            return val;
    }

    return -1;
}

int majorityElement_better(vector<int> &nums) // O(nlogn)
{
    // sort the array
    sort(nums.begin(), nums.end());

    // freq count
    int freq = 1, ans = nums[0];
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2)
        {
            return ans;
        }
    }
}

int majorityElement_optimal(vector<int> &nums) // O(n)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
            freq--;
    }
    int count = 0;
    for (int val : nums)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > nums.size() / 2)
    {
        return ans;
    }
    else
        return -1;
}
int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    cout << "Majority Element :" << majorityElement_optimal(nums);
    return 0;
}