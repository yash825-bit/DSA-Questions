#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverseArray(int arr[], int st, int en){
    if(st >= en) return;
    swap(arr[st], arr[en]);

    reverseArray(arr, st+1, en-1);
}

void reverseArray2(int arr[], int n, int i){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);

    reverseArray2(arr, n, i+1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int arr[n];
        // function call here with input n->
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }

        reverseArray2(arr, n, 0);

        for(int i = 0; i < n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}