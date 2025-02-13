#include <bits/stdc++.h>
using namespace std;

bool searchInRow(vector<vector<int>> &matrix, int target, int row) // O(log n)
{
    int n = matrix[0].size();
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == matrix[row][mid])
        {
            return true;
        }
        else if (target > matrix[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>> &matrix, int target) // O(log m)
{
    int m = matrix.size() /*m=>count the rows*/,
        n = matrix[0].size() /*n = > count the columns */;

    int st = 0, end = m - 1;

    while (st <= end)
    {
        int midRow = st + (end - st) / 2;
        if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
        {
            return searchInRow(matrix, target, midRow);
        }
        else if (target >= matrix[midRow][n - 1])
        {
            st = midRow + 1;
        }
        else
        {
            end = midRow - 1;
        }
    }
    return false;
}
int main()
{
    int target = 34;
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    cout << searchMatrix(matrix, target) << endl;
    return 0;
}