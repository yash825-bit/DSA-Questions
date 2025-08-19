#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int HCFWithEuclidean(int m, int n){
    while(m>0 && n>0){
        if(m>n) m = m%n;
        else n = n%m;
    }
    if(m>n) return m;
    else return n;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int m, n;
        cin >> m >> n;
        // function call here with input n->
        cout << HCFWithEuclidean(m, n) << endl;
    }
    return 0;
}