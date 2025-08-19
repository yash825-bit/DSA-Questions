#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n>0){
        int lastDigit = n%10;
        count++;
        n = n / 10;
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout << countDigits(n) <<endl;
    }
    return 0;
}