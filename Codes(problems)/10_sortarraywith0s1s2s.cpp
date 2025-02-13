#include <bits/stdc++.h>
using namespace std;

void sortColors_brute(vector<int> &arr, int n) // O(nlogn)
{
    sort(arr.begin(), arr.end());
}

void sortColors_better(vector<int> &arr, int n) // O(n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    int idx = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[idx++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[idx++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[idx++] = 2;
    }
}

void sortColors_optimal(vector<int> &arr, int n) // O(n)
{
    int mid = 0, low = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}
int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = arr.size();
    // sortColors_brute(arr, n);
    // sortColors_better(arr, n);
    sortColors_optimal(arr, n);
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}