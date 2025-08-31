#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int factUsingRec(int n){
    if(n==0 || n==1)return 1;
    int fact = n * factUsingRec(n-1);
    return fact;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout << factUsingRec(n) <<endl;
    }
    return 0;
}