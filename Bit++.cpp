#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int r = 0;
    while(n--){
        cin>>r;
        r = ("+")? 1:-1;
    }
    cout<<r;
}