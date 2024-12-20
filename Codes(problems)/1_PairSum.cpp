#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum_brute(vector<int> &nums, int sz, int target) // O(n^2)
{
    vector<int> ans;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return ans;
}

vector<int> pairSum_better(vector<int> &nums, int sz, int target) // O(n)
{
    int i = 0, j = sz - 1;
    vector<int> ans;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
            j--;
        else if (pairSum < target)
            i++;
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    int sz = nums.size();
    // vector<int> ans = pairSum_brute(nums, sz, target);
    vector<int> ans = pairSum_better(nums, sz, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}