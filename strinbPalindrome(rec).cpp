#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkPalindrome(string str,int size, int i){
    if(str[i]!=str[size-0-i]){
        return false;
    }
    checkPalindrome(str, size-1, i+1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        // int n;
        // cin >> n;
        string str;
        getline(cin, str);
        // function call here with input n->
    }
    return 0;
}