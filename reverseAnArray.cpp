#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reversal(int fp, int sp, int arr[]){
    if(fp>sp){
        return;
    }
    swap(arr[fp], arr[sp]);
    reversal(fp+1, sp-1, arr);
}

void reversal2(int i, int n, int arr[]){
    if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reversal2(i+1, n, arr);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        reversal2(0, n, arr);

        for(int i=0; i < n ; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}