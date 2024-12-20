#include <iostream>
#include <limits.h>
using namespace std;

// linear search
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

// reverse an array
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end) // for even array
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// calculate the sum and product of all numbers in an array
int sumofArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int productofArr(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

// swap the max and min number of an array
void swapMaxmin(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int idx1, idx2;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        if (arr[i] == smallest)
            idx1 = i;
        largest = max(arr[i], largest);
        if (arr[i] == largest)
            idx2 = i;
    }
    swap(arr[idx1], arr[idx2]);
}
// print the intersection of two arrays
int printIntersection(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}
void uniqueValue(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && nums[i] == nums[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique == true)
            cout << nums[i] << endl;
    }
}
int main()
{
    // int arr[6] = {2, 4, 6, 7, 10, 13};
    // int size = 6;

    // cout << "The target value is found at " << linearSearch(arr, 5, 7) << endl;

    // reverseArray(arr, size);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // cout << "The sum of all numbers of the array : " << sumofArr(arr, size) << endl;
    // cout << "The product of all numbers of the array :" << productofArr(arr, size) << endl;

    // swapMaxmin(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int nums[7] = {1, 2, 3, 1, 2, 3, 4};
    // int size = 7;

    // uniqueValue(nums, size);

    int arr1[] = {2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {1, 2, 3, 4, 7};
    int size1 = (sizeof(arr1) / sizeof(arr1[0]));
    int size2 = (sizeof(arr2) / sizeof(arr2[0]));
    printIntersection(arr1, arr2, size1, size2);
    return 0;
}