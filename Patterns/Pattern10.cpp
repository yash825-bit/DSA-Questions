#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern10(int n){
    char ch = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<ch<<" ";
        }
        ch = ch + 1;
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
        pattern10(n);
    }
    return 0;
}