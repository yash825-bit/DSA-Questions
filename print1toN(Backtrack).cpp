#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printnumBackTrack(int i, int n){
    if(i<1) return;
    printnumBackTrack(i-1, n);
    cout<<i<<endl;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        printnumBackTrack(n, n);
    }
    return 0;
}