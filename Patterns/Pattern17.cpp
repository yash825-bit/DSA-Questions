#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern17(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<(char)('A'+n-i+j-1)<<" ";
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
        pattern17(n);
    }
    return 0;
}