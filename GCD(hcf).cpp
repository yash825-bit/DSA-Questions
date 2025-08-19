#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int hcf(int m, int n){
    int gcd = 1;
    for(int i = 1; i <= min(m, n); i++){
        if(m%i==0 && n%i==0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int m,n;
        cin >> m >> n;
        // function call here with input n->
        cout<<hcf(m, n)<<endl;
    }
    return 0;
}