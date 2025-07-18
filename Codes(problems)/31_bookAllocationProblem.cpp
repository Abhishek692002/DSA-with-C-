#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &arr,int k,int n,int maxAllowedPages){
    int students = 1, pages = 0;
    for (int i = 0; i < n;i++){
        if(arr[i]>maxAllowedPages){//edge case
            return false;
        }
        if((pages+arr[i])<=maxAllowedPages){
            pages += arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }
    return (students > k) ? false : true;
}
int countMinPages(vector<int> &arr,int k){
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += arr[i];
    }

    if(k>n){
        return -1;
    }
    int st = 0, end = sum, ans = 0;

    while(st<=end){
        int mid = st + (end - st) / 2;
        if(isValid(arr,k,n,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {15, 17, 20};
    int k = 2;
    int result = countMinPages(arr, k);
    cout << result;
    return 0;
}