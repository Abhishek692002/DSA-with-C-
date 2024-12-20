#include <iostream>
#include <vector>
using namespace std;

// find the single number(one)
int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans = ans ^ val;
    }
    return ans;
}

// linear search using vector
int linearSearch(vector<int> &vec, int target)
{
    for (int val : vec)
    {
        if (vec[val] == target)
            return val;
    }
    return -1;
}

// reverse an array using vector
void reverse(vector<int> &vec)
{
    int start = 0, end = vec.size() - 1;
    while (start <= end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
int main()
{
    // vector<int> nums = {4, 1, 2, 1};
    // cout << singleNumber(nums) << endl;

    vector<int> vec = {2, 3, 4, 5, 6};
    // cout << linearSearch(vec, 8) << endl;
    reverse(vec);
    for (int val : vec)
        cout << val << " ";
    cout << endl;
    return 0;
}