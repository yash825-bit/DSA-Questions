#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void print1toN(int i, int n){
    if(i>n)return;
    cout<<i<<endl;
    print1toN(i+=1, n);
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        print1toN(1, n);
    }
    return 0;
}