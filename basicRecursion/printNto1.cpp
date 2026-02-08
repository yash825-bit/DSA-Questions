#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printNto1( int n)
{
    if(n<1)return;
    cout<<n<<endl;
    printNto1(n-1);
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        printNto1(n);
    }
    return 0;
}