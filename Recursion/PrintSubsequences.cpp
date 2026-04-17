#include <iostream>
#include <vector>
using namespace std;

void solve(int idx, vector<int> &arr, vector<int> &list, vector<vector<int>> &seq);

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> list;
    vector<vector<int>> ans;
    solve(0, arr, list, ans);

    for(vector<int>& x : ans)
    {
        for(int i : x)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void solve(int idx, vector<int> &arr, vector<int> &list, vector<vector<int>> &seq)
{
    if (idx == arr.size())
    {
        seq.push_back(list);
        return;
    }
    solve(idx + 1, arr, list, seq);

    list.push_back(arr[idx]);
    solve(idx + 1, arr, list, seq);

    list.pop_back();
}