#include <iostream>
#include <vector>

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

    for (std::vector<int> &arr : ans)
    {
        for (int x : arr)
        {
            std::cout << x << " ";
        }
        std::cout << '\n';
    }
}
void solve(int idx, std::vector<int> &arr, std::vector<int> &list, std::vector<std::vector<int>> &ans, int k, int sum)
{
    if (idx == arr.size())
    {
        if (sum == k)
        {
            ans.push_back(list);
            return;
        }
        return;
    }
    solve(idx + 1, arr, list, ans, k, sum);

    list.push_back(arr[idx]);
    solve(idx + 1, arr, list, ans, k, sum + arr[idx]);

    list.pop_back();
}
