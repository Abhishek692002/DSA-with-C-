#include<bits/stdc++.h>
using namespace std;

class Stack{
    vector<int> s;
    public:
    void push(int val){//O(1)
        s.push_back(val);
    }

    void pop(){//O(1)
        s.pop_back();
    }

    int top(){//O(1)
        return s[s.size() - 1];
    }

    bool empty(){
        return s.size() == 0;// if empty return TRUE or FALSE
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}