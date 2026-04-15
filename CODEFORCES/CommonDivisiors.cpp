#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long hcf = arr[0];

    for (int i = 1; i < n; i++)
    {
        hcf = __gcd(hcf, arr[i]);
    }
    int count = 0;
    for (long long i = 1; i * i <= hcf; i++)
    {
        if (hcf % i == 0)
        {
            count++;
            if (hcf / i != i)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}