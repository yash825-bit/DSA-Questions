#include <iostream>
#include <vector>
#include <algorithm>

int pivotIndex(std::vector<int> &arr, int low, int high)
{
    int pivot = arr[low];

    int i = low, j = high;

    while(i < j)
    {
        while(i <= high && arr[i] >= pivot)i++;
        while(j >= 0 && arr[j] < pivot)j--;
        if(i < j)
        {
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[j], arr[low]);
    return j;
}
void quickSortDescending(std::vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int pi = pivotIndex(arr, low, high);
        quickSortDescending(arr, low, pi-1);
        quickSortDescending(arr, pi+1, high);

    }
}
int main()
{
    int n;
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i = 0; i < n ; i++)
    {
        std::cin>>arr[i];
    }
    quickSortDescending(arr, 0, arr.size()-1);

    for(int i : arr)
    {
        std::cout<<i<<" ";
    }

    return 0;
}