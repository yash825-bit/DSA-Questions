#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool palindrome(int n){
    int rev = 0;
    int orig = n;
    while(n>0){
        int lastDigit = n % 10;
        rev = (rev*10) + lastDigit;
        n = n /10;
    }
    if(rev == orig) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout << palindrome(n) << endl;
    }
    return 0;
}