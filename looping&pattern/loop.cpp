#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printName(string name){
    cout<<name<<endl;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string name;
        cin>>name;
        // function call here with input n->
        printName(name);
    }
    return 0;
}