#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printy(int i, int n){
    if(i>n) return;
    printy(i+1, n);
    cout<<i<<endl;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        printy(1, n);
    }
    return 0;
}