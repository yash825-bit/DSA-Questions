#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverse(vector<int>& arr, int i, int j){
    if(i>=j){
        return;
    }
    swap(arr[i], arr[j]);
    reverse(arr, i+1, j-1);
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        
        vector<int>array(n);
        for(int i = 0; i < array.size(); i++){
            cin>>array[i];
        }
        reverse(array, 0, n-1);
        for(int i = 0; i < array.size(); i++)
        {
            cout<<array[i]<<" ";
        }
    }
    return 0;
}