#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sum2(int n, int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    sum2(n-1, sum+n);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        sum2(n, 0);
    }
    return 0;
}