#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void recurs(int n)
{
    if(n==0)return;
    cout<<"Yash"<<endl;
    recurs(n-1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        recurs(n);

    }
    return 0;
}