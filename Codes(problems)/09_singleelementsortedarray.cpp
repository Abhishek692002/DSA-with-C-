#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1) // if the array contains single element
        return arr[0];
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mid == 0 && arr[0] != arr[1]) // if starting element is single element
            return arr[mid];

        if (mid == n - 1 && arr[n - 1] != arr[n - 2]) // if ending element is single element
            return arr[mid];

        if (arr[mid - 1] != arr[mid] && arr[mid + 1] != arr[mid]) // if mid is the single element
            return arr[mid];

        if (mid % 2 == 0) // if the left and right side of the mid is even
        {
            if (arr[mid - 1] == arr[mid]) // left
            {
                end = mid - 1;
            }
            else // right
            {
                st = mid + 1;
            }
        }

        else // if the left and right side of the mid is odd
        {
            if (arr[mid - 1] == arr[mid]) // right
            {
                st = mid + 1;
            }

            else // left
            {
                end = mid - 1;
            }
        }
    }
    return -1; // if single element does not exists
}
int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    vector<int> arr2 = {3, 3, 7, 7, 10, 11, 11};

    cout << singleElement(arr1) << endl;
    cout << singleElement(arr2) << endl;
    return 0;
}