#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> InPlacePrefixSum(vector<int>& arr){
    for(int i = 1; i < arr.size(); i++){
        arr[i] = arr[i-1] + arr[i];
    }
    return arr;
}
vector<int> prefix_sum(const vector<int>& arr){
    vector<int> pref_sum(arr.size(), 0);

    pref_sum[0] = arr[0];

    for(int i =1; i < arr.size(); i++){
        pref_sum[i] = pref_sum[i-1] + arr[i];
    }
    return pref_sum;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        vector<int> array(n);

        for(int i = 0; i < array.size(); i++){
            cin>>array[i];
        }
        
        vector<int> ans = InPlacePrefixSum(array);

        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}