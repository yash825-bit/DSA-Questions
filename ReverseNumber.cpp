#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int reverse(int n){
    int result = 0;
    while(n>0){
        int lastDigit = n % 10;
        result = (result*10) + lastDigit;
        n = n / 10;
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout << reverse(n) << endl;
    }
    return 0;
}