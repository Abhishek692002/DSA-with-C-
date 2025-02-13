#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix[0].size();
    int row = 0, cols = n - 1;

    while (row < n && cols >= 0)
    {
        if (target == matrix[row][cols])
        {
            return true;
        }
        else if (target < matrix[row][cols])
        {
            cols--;
        }
        else
        {
            row++;
        }
    }
    return false;
}
int main()
{
    int target = 5;
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};

    cout << searchMatrix(matrix, target) << endl;
    return 0;
}