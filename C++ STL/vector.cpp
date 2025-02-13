#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);
    // vec.pop_back();

    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    // cout << "vector at 2: " << vec[2] << " or " << vec.at(2) << endl;

    // cout << "Front element :" << vec.front() << endl;
    // cout << "Back element :" << vec.back() << endl;

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    // vector<int> arr(3, 10);
    // for (int val : arr)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // vector<int> arr1(arr);
    // for (int val : arr1)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    // vec.erase(vec.begin());     // erase the 0th index value
    // vec.erase(vec.begin() + 1); // erase the 1th index value
    // vec.erase(vec.begin() + 1, vec.begin() + 3);//erase 2,3

    // vec.insert(vec.begin() + 2, 100);
    // vec.clear();

    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    // cout << "is Empty :" << vec.empty() << endl;
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    // iterators

    // cout << "vec.begin :" << *(vec.begin()) << endl;
    // cout << "vec.end :" << *(vec.end()) << endl;

    vector<int> arr = {10, 20, 30, 40, 50};
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // vector<int>::reverse_iterator it1;
    for (auto it1 = arr.rbegin(); it1 != arr.rend(); it1++)
    {
        cout << *(it1) << " ";
    }
    cout << endl;
    return 0;
}