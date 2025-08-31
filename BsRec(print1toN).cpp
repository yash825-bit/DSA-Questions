#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printNums(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    printNums(i+1, n);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        printNums(1, n);
    }
    return 0;
}