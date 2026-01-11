#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern11(int n){
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<(char)(ch+j)<<" ";
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
        pattern11(n);
    }
    return 0;
}