#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool Armstrong(int n){
    int summation = 0;
    int origNum = n;
    int count = (int)(log10(n)+1);
    while(n>0){
        int lastDigit = n % 10;
        summation += pow(lastDigit, count);
        n = n / 10;
    }
    if(origNum == summation) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout << Armstrong(n) << endl;
    }
    return 0;
}