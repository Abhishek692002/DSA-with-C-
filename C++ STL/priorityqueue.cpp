#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // priority_queue<int> p;

    priority_queue<int, vector<int>, greater<int>> p;
    p.push(1);
    p.push(20);
    p.push(3);
    p.push(40);

    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;
    return 0;
}