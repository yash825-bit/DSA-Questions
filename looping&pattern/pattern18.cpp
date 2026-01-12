#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern18(int n){
    for(int i = 0; i<n; i++){
        for(int j = n-i-1; j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        pattern18(n);
    }
    return 0;
}