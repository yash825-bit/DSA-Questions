#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int counter = 0;

// void printi(int n){
//     if(counter > n) return;
//     cout<<counter<<endl;
//     counter++;
//     printi(n);
// }

void printi(int n){
    if(counter>n) return;
    cout<<counter<<endl;
    counter = counter+2;
    printi(n);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        printi(n);
    }
    return 0;
}