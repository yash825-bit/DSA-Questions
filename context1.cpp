#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;

        if(str=="bca" || str=="cab"){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}