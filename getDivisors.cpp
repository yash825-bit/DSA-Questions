#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printingDivisors(int n){
    vector<int> ans;
    for(int i = 1; i*i <= n; i++){
        if(n%i==0){
            ans.push_back(i);
            if(n/i!=i){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        printingDivisors(n);
    }
    return 0;
}