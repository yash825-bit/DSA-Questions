#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(vector<int> &arr, int n)
{
    int count = 0;

    for(int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 1;
        }
    }
    return n;
    
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        
        vector<int> arr(n);

        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        cout<<solve(arr, n)<<endl;
    }
    return 0;
}