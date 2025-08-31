#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool palindrome(string str, int fi, int li){
    if(fi>=li){
        return true;
    }
    if(str[fi] != str[li]){
        return false;
    }
    return palindrome(str, fi+1, li-1);
}

bool palindrome2(string str, int i){
    if(i>=str.length()/2){
        return true;
    }
    if(str[i] != str[str.length()-i-1]){
        return false;
    }
    return palindrome2(str, i+1);
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    for(int i=0; i<t; i++){
        string str;
        getline(cin, str);
        // function call here with input n->
        cout<<palindrome2(str, 0)<<endl;
    }
    return 0;
}