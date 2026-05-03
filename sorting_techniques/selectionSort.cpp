#include<iostream>
#include<vector>
#include<algorithm>

void selectionSort(std::vector<int> &arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minidx = i;
        for(int j = i+1; j < n; j++)
        { 
            if(arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }
        std::swap(arr[i], arr[minidx]);
    }
}
int main()
{
    int n;
    std::cin>>n;

    std::vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }

    selectionSort(arr, n);

    for(int x : arr)
    {
        std::cout<<x<<" ";
    }
    return 0;
}