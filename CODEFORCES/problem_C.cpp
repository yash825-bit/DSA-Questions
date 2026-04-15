#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        // function call here with input n->
        string str;
        cin>>str;

        stack<char> st;

        for(int i = 0; i < str.length(); i++)
        {
            if(!st.empty() && str[i]==st.top())
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }
        if(st.empty())
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }

    }
    return 0;
}