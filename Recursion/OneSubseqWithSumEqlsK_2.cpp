#include <iostream>
#include <vector>

bool solve(int idx, std::vector<int> &arr, std::vector<int> &list, std::vector<std::vector<int>> &ans, int sum, int k);

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

    solve(0, arr, list, ans, 0, k);

    for (std::vector<int> &i : ans)
    {
        for (int x : i)
        {
            std::cout << x << " ";
        }
        std::cout << '\n';
    }
}
bool solve(int idx, std::vector<int> &arr, std::vector<int> &list, std::vector<std::vector<int>> &ans, int sum, int k)
{
    if (idx == arr.size())
    {
        if (sum == k)
        {
            ans.push_back(list);
            return true;
        }
        return false;
    }
    if(solve(idx + 1, arr, list, ans, sum, k)) return true;

    list.push_back(arr[idx]);
    if(solve(idx + 1, arr, list, ans, sum += arr[idx], k)) return true;

    list.pop_back();
    return false;
}