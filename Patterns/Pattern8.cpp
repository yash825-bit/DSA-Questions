#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern8(int n){
    for(int i = 1; i <= n; i++){
        int val = i;
        for(int j = 0; j < i; j++){
            cout<<val+j<<" ";
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
        pattern8(n);
    }
    return 0;
}