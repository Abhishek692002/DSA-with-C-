#include <iostream>
#include <vector>
using namespace std;

vector<int> productarray_brute(vector<int> &nums) // O(n^2)
{
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        int ans = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                ans *= nums[j];
            }
        }

        result.push_back(ans);
    }
    return result;
}
vector<int> productarray_optimal1(vector<int> &nums) // TC:O(n) SC:O(n)
{
    int n = nums.size();
    vector<int> result(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    // prefix
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // suffix
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // product
    for (int i = 0; i < n; i++)
    {
        result[i] = prefix[i] * suffix[i];
    }

    return result;
}

vector<int> productarray_optimal2(vector<int> &nums) // TC:O(n) SC:O(1)
{
    int n = nums.size();
    vector<int> result(n, 1);

    for (int i = 1; i < n; i++)
    {
        result[i] = result[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        result[i] *= suffix;
    }

    return result;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productarray_optimal2(nums); // most optimized approach

    for (int val : result)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}