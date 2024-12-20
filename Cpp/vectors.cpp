#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec = {1, 2, 3};
    // vector<int> vec(5, 0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    // for (int i : vec)
    // {
    //     cout << i << endl;
    // }

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // for (char val : vec)
    // {
    //     cout << val << endl;
    // }

    // vector functions
    // 1. size
    // cout << "size =" << vec.size() << endl;

    // 2.push_back
    // vector<int> vec;
    // vec.push_back(25);
    // vec.push_back(22);
    // vec.push_back(45);
    // vec.push_back(67);
    // for (int val : vec)
    // {
    //     cout << val << endl;
    // }

    // 3.pop_back
    // vec.pop_back();
    // for (int val : vec)
    // {
    //     cout << val << endl;
    // }

    // 4.front
    // cout << vec.front() << endl;

    // 5.back
    // cout << vec.back() << endl;

    // 6.at
    // cout << vec.at(0) << endl;
    // cout << vec.at(1) << endl;
    // cout << vec.at(2) << endl;

    // size and capacity
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}