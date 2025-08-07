#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    stack<int> s;

    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (s.size() > 0 && nums[s.top()] <= nums[i % n])
        {
            s.pop();
        }

        ans[i % n] = s.empty() ? -1 : nums[s.top()];
        s.push(i % n);
    }

    return ans;
}
int main()
{
    vector<int> nums = {3, 6, 5, 4, 2};
    vector<int> res = nextGreaterElement(nums);

    for (int val : res)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}