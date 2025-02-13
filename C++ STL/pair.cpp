#include <iostream>
#include <vector>
using namespace std;
int main()
{
    pair<int, int> p = {1, 2};
    pair<char, int> p1 = {'a', 2};

    // cout << p.first << endl;
    // cout << p.second << endl;

    // cout << p1.first << endl;
    // cout << p1.second << endl;

    pair<int, pair<int, int>> p3 = {1, {2, 3}};
    // cout << p3.first << endl;
    // cout << p3.second.first << endl;

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    vec.push_back({4, 5});  // when objects are already created push_back just insert the values
    vec.emplace_back(4, 5); // in-place object created at the time of insertion . it can convert the indivisual value into pair at the time of insertion but push_back can't. Thus emplace_back slightly faster than push_back.
    for (auto p : vec)
    {
        cout << p.first << "    " << p.second << endl;
    }
    return 0;
}