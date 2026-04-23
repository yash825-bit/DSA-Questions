#include <iostream>
#include <vector>

using namespace std;

int solve(int idx, vector<int> &arr, int sum, int k);
int main()
{
    int n;
    cin >> n;

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
        cin >> ans[i];

    int k;
    cin >> k;

    cout << solve(0, ans, 0, k) << endl;
}
int solve(int idx, vector<int> &arr, int sum, int k)
{
    if(idx == arr.size())
    {
        if (sum == k)
        return 1;
        else
        return 0;
    }
    int l = solve(idx + 1, arr, sum += arr[idx], k);
    int r = solve(idx + 1, arr, sum -= arr[idx], k);

    return l + r;
}