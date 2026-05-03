#include<iostream>
#include<vector>
using namespace std;

istream& operator>>(istream& in,  vector<int>& arr)
{
    for(int& num : arr)
    {
        in >> num;
    }
    return in;
}

ostream& operator<<(ostream& out, const vector<int>& arr)
{
    for(const int& num : arr)
    {
        out << num << " ";
    }
    return out;
}

vector<int> selectionSort(vector<int> &arr)
{
    int i = 0;
    for(int j = i+1; i < arr.size(); i++)
    {
        if(arr[i])
    }
}
int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {   
        int n;
        cin>>n;
        vector<int> arr(n);
        cin>>arr;
        cout<<arr;
    }
}