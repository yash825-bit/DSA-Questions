#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<n-j+1<<" ";
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
        pattern3(n);
    }
    return 0;
}