#include <iostream>
#include <vector>
#include <algorithm>

void insertionSort(std::vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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

    insertionSort(arr, n);

    for (int x : arr)
    {
        std::cout << x << " ";
    }
    return 0;
}