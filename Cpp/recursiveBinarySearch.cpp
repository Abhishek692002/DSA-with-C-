#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar == arr[mid])
        {
            return mid;
        }
        else if (tar >= arr[mid])
        {
            return binarySearch(arr, tar, mid + 1, end);
        }
        else
        {
            return binarySearch(arr, tar, st, mid - 1);
        }
    }
    return -1;
}
int main()
{
    int arr[] = {-1, 0, 3, 5, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << binarySearch(arr, 5, 0, n - 1);
    return 0;
}