#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printNum(int i, int n){
    if(n<i) return;
    cout<<n<<endl;
    printNum(i, n-1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        printNum(1, n);
    }
    return 0;
}