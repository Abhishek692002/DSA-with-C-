#include <iostream>
#include <vector>
using namespace std;

void selectior_sort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int smallestIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}
int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    int n = arr.size();
    selectior_sort(arr, n);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}