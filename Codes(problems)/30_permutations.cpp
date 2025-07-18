#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> getPermutations(vector<int> &arr,int idx,vector<vector<int>> &ans){
    int n = arr.size();
    if(idx==n){
        ans.push_back(arr);
        return ans;
    }
    for (int i = idx; i < n;i++){
        swap(arr[idx], arr[i]);
        getPermutations(arr, idx + 1, ans);
        swap(arr[idx], arr[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<vector<int>>
        result = getPermutations(arr, 0, ans);

    for(auto &row:result){
        for(int val:row){
            cout <<val << " ";
        }
        cout << endl;
    }
        return 0;
}