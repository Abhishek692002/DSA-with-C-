#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) // O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap)
            return;
    }
}

void selectionSort(int arr[], int n) // O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallIdx])
            {
                smallIdx = j;
            }
        }
        swap(arr[i], arr[smallIdx]);
    }
}
int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;

    // bubbleSort(arr, n);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}