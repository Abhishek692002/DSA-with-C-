#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        for (int j = i + 1; j < n;)
        {
            int p = j + 1, q = n - 1;

            while (p < q)
            {
                int sum = arr[i] + arr[j] + arr[p] + arr[q];
                if (sum < 0)
                {
                    p++;
                }
                else if (sum > 0)
                {
                    q--;
                }
                else
                {
                    ans.push_back({arr[i], arr[j], arr[p], arr[q]});
                    p++;
                    q--;

                    while (p < q && arr[p] == arr[p - 1])
                        p++;
                }
            }
            j++;
            while (j < n && arr[j] == arr[j - 1])
                j++;
        }
    }

    return ans;
}
int main()
{
    vector<int> nums = {-2, -1, -1, 1, 1, 2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

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