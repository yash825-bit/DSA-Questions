#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printName(int n){
    if(n==0) return;
    cout<<"Yash Goyal"<<endl;
    printName(n-1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        printName(n);
    }
    return 0;
}