#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkPrime(int n){
    int count = 0;
    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count==2) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout << checkPrime(n) << endl;
    }
    return 0;
}