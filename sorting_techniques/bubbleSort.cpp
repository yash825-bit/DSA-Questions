#include <iostream>
#include <vector>
#include <algorithm>

void bubbleSort(std::vector<int> &arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n-i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                std::swap(arr[j], arr[j - 1]);
            }
        }
    }
}
int main()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int x : arr)
    {
        std::cout << x << " ";
    }
    return 0;
}