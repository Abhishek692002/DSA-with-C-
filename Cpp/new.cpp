#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    unordered_map<char, int> m;
    for(auto el:str){
        m[el]++;
    }

    for(auto el:m){
        cout << el.first << " " << el.second << endl;
    }
    return 0;
}