#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s; // Last in First out
    s.push(1);
    s.push(2);
    s.push(3);

    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;

    // cout << s.size() << endl;

    stack<int> s2;
    s2.swap(s);

    cout << "s.size :" << s.size() << endl;
    cout << "s2.size :" << s2.size() << endl;
    // cout << "Top :" << s.top() << endl;
    return 0;
}