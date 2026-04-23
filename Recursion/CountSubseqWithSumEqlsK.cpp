#include <iostream>
#include <vector>

using namespace std;

void solve(int idx, vector<int> &arr, vector<int> &list, int sum, int k, int &cnt);
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int cnt = 0;
    vector<int> list;
    solve(0, arr, list, 0, k, cnt);

    cout << cnt << '\n';
}
void solve(int idx, vector<int> &arr, vector<int> &list, int sum, int k, int &cnt)
{
    if (idx == arr.size())
    {
        if (sum == k)
        {
            cnt = cnt + 1;
        }
        return;
    }

    solve(idx + 1, arr, list, sum, k, cnt);

    list.push_back(arr[idx]);
    solve(idx + 1, arr, list, sum + arr[idx], k, cnt);

    list.pop_back();
}