#include <iostream>
#include <vector>
#include <algorithm>

int partionIndex(std::vector<int> &arr, int n, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[low], arr[j]);
    return j;
}
void quickSort(std::vector<int> &arr, int n, int low, int high)
{
    if (low < high)
    {
        int pi = partionIndex(arr, n, low, high);
        quickSort(arr, n, low, pi - 1);
        quickSort(arr, n, pi + 1, high);
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
    quickSort(arr, n, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}