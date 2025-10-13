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
void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
            }
        }
        printArr(arr, n);
    }
    return 0;
}