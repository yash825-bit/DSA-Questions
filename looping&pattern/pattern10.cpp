#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern10(int n){
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<(char)(ch+i)<<" ";
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
        pattern10(n);
    }
    return 0;
}