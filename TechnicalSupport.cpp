#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // function call here with input n->
        char chr[n];
        for(int i ; i < n; i++){
            cin>>chr[i];
        }
        int Q = 0, A = 0;
        for(int i = 0; i < n; i++){
            if(chr[i] == 'Q')Q++;
            else Q = max(0, Q-1);
        }
        if(Q==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}