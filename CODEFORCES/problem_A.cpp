#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        
        vector<int> dishes(n);

        for(int i = 0; i < n; i++)
        {
            cin>>dishes[i];
        }

        unordered_map<int, int> mp;

        int maxi = INT_MIN;
        for(int i = 0; i < dishes.size(); i++)
        {
            mp[dishes[i]]++;
            maxi = max(dishes[i], maxi);
        }
        cout<<mp[maxi]<<endl;
    }
    return 0;
}