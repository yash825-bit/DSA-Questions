#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void summa(int i, int n, int sum){
    if(i>n){
        cout<<sum<<endl;
        return;
    }

    summa(i+1,n, sum+i);
}
int sum2(int n){
    if(n==0) return 0;

    return n+sum2(n-1);
}

int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout<<factorial(n)<<endl;
    }
    return 0;
}