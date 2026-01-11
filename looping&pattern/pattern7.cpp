#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern7(int n){
    int count = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        pattern7(n);
    }
    return 0;
}