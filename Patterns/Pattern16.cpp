#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern16(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<(char)('A'+i+j)<<" ";
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
        pattern16(n);
    }
    return 0;
}