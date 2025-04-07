#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum_BruteForce(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());

                    if (s.find(trip) == s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}

vector<vector<int>> threeSum_Better(vector<int> &nums)
{
    int n = nums.size();
    set<int> s;
    set<vector<int>> uniqueTriplet;

    for (int i = 0; i < n; i++)
    {
        int target = -nums[i];
        for (int j = i + 1; j < n; j++)
        {
            int toFind = target - nums[j];
            if (s.find(toFind) != s.end())
            {
                vector<int> trip = {nums[i], nums[j], toFind};
                sort(trip.begin(), trip.end());
                uniqueTriplet.insert(trip);
            }
            s.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(uniqueTriplet.begin(), uniqueTriplet.end());
    return ans;
}
vector<vector<int>> threeSum_Optimul(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        int j = i + 1, k = n - 1;
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        while (j < k)
        {
            int sum = nums[i]+nums[j]+ nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++, k--;

                while (j < k && nums[j] == nums[j - 1])
                    j++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, 4};
    vector<vector<int>> result = threeSum_Optimul(nums);

    for (auto &triplet : result)
    {
        for (int val : triplet)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}