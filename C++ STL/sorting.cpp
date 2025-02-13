#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[5] = {5, 0, 3, 1, 6};

    // sort(arr, arr + 5);

    // for (int val : arr)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    vector<int> vec = {5, 0, 3, 1, 6};

    // sort(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(), greater<int>());

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}