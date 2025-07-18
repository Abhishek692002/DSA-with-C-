#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                   vector<int> &newInterval)
{
    vector<vector<int>> ans;
    int i = 0;
    int n = intervals.size();
    while (i < n && intervals[i][1] < newInterval[0])
    {
        ans.push_back(intervals[i]);
        i++;
    }

    while (i < n && intervals[i][0] <= newInterval[1])
    {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }

    ans.push_back(newInterval);

    while (i < n)
    {
        ans.push_back(intervals[i]);
        i++;
    }

    return ans;
}
int main()
{
    vector<vector<int>> intervals = {{1, 3}, {6, 9}};
    vector<int> newInterval = {2, 5};

    vector<vector<int>> ans = insertInterval(intervals, newInterval);

    for (auto &row : ans)
    {
        for (auto element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}