#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArray(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int p1 = m - 1, p2 = n - 1, i = m + n - 1;
    while (p2 >= 0)
    {
        if (p1 >= 0 && nums1[p1] > nums2[p2])
        {
            nums1[i] = nums1[p1];
            i--;
            p1--;
        }
        else
        {
            nums1[i] = nums2[p2];
            i--;
            p2--;
        }
    }

    return nums1;
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    vector<int> ans = mergeSortedArray(nums1, m, nums2, n);
    for (int i = 0; i < m + n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}