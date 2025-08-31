#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sums(int i, int sum, int n){
    if(i>n){
        cout<<sum<<endl;
        return;
    }
    sums(i+1, sum+i, n);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        sums(1, 0, n);
    }
    return 0;
}