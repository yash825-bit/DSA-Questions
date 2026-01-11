#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern3Rev(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<n-j<<" ";
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
        pattern3Rev(n);
    }
    return 0;
}