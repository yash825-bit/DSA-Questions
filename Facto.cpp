#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*Factorial(n-1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout<<Factorial(n)<<endl;
    }
    return 0;
}