#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout<<fibonacci(n)<<endl;
    }
    return 0;
}