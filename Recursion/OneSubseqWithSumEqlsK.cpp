#include <iostream>
#include <vector>

bool flag = true;
void solve(int idx, std::vector<int> &arr, std::vector<int> &list, std::vector<std::vector<int>> &ans, int k, int sum);
int main()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int k;
    std::cin >> k;

    std::vector<int> list;
    std::vector<std::vector<int>> ans;

    solve(0, arr, list, ans, k, 0);

    for(std::vector<int> i : ans)
    {
        for(int x : i)
        {
            std::cout<<x<<" ";
        }
        std::cout<<'\n';
    }
}
void solve(int idx, std::vector<int> &arr, std::vector<int> &list, std::vector<std::vector<int>> &ans, int k, int sum)
{
    if (idx == arr.size())
    {
        if (sum == k && flag)
        {
            ans.push_back(list);
            flag = false;
        }
        return;
    }
    // not taking
    solve(idx + 1, arr, list, ans, k, sum);

    // taking
    list.push_back(arr[idx]);
    solve(idx + 1, arr, list, ans, k, sum + arr[idx]);

    // removing last taken
    list.pop_back();
}