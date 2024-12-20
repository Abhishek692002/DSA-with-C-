#include <iostream>
#include <vector>
using namespace std;

int peakIndex_optimal(vector<int> &nums) // O(log n)
{
    int st = 1, end = nums.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
            return mid;

        if (nums[mid - 1] < nums[mid])
            st = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}
int main()
{
    vector<int> nums = {0, 3, 8, 9, 5, 2};
    cout << peakIndex_optimal(nums) << endl;
    return 0;
}