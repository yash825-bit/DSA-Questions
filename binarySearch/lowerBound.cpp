#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int lowerBound(vector<int>& arr, int target){
    int ans = arr.size();
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] >= target){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
        }
        int target;
        cin>>target;

        cout << lowerBound(arr, target) << endl;
    }
    return 0;
}