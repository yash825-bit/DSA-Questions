#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int ref(int &a){
    a = 100;
    return a;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        ref(n);
        cout<<n<<endl;
    }
    return 0;
}