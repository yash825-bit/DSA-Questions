#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void my_name(int n)
{
    if(n==0)return;
    cout<<"My name is Yash"<<endl;
    my_name(n-1);
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        my_name(n);
    }
    return 0;
}