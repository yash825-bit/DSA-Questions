#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printName(string str){
    cout<<str<<endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    for(int i=0; i<t; i++){
        string str;
        getline(cin, str);
        // function call here with input n->
        printName(str);
    }
    return 0;
}