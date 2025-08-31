#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sum3(int n){
    if(n==0){
        return 0;
    }
    return n + sum3(n-1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout<<sum3(n)<<endl;
    }
    return 0;
}