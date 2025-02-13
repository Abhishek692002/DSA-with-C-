#include <bits/stdc++.h>
using namespace std;

int find_duplicate_better(vector<int> &arr)
{
    unordered_set<int> s;
    for (int val : arr)
    {
        if (s.find(val) != s.end())
        {
            return val;
        }
        s.insert(val);
    }

    return -1;
}

int find_duplicate_optimal(vector<int> &arr)
{
    int slow = arr[0];
    int fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}
int main()
{
    vector<int> arr = {3, 1, 3, 4, 2};
    cout << find_duplicate_better(arr) << endl;
    cout << find_duplicate_optimal(arr);
    return 0;
}