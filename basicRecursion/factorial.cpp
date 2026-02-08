#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1)return 1;
    return n * fact(n-1);
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        cout<<fact(n)<<endl;
    }
    return 0;
}