#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int min(int arr[], int n){
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // function call here with input n->
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        for(int j = 0; j<n; j++){
            if(arr[j] == min(arr,n)){
                arr[j] = arr[j]+1;
                break;
            }
        }
        int multi = 1;
        for(int k = 0; k < n; k++){
            multi = multi * arr[k];
        }
        cout<<multi<<endl;
    }
    return 0;
}