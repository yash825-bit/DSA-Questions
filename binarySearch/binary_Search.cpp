#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearch(vector<int>& arr, int n,  int target)
{
    int start = 0;
    int end = n-1;
    
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> array(n);

        for(int i = 0; i < array.size(); i++)
        {
            cin >> array[i];
        }
        int target;
        cin>>target;
        
        cout<<binarySearch(array, n, target);
    }
    return 0;
}