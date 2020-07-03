#include <bits/stdc++.h>

using namespace std;

// Naive Solution -> TC : O(n^2)
//                -> SC : O(1)
int trappingWater(int arr[], int n)
{
    int count = 0;
    if (n <= 2)
        return 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }

        int rmax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }

        count = count + (min(lmax, rmax) - arr[i]);
    }

    return count;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << trappingWater(a, n) << endl;
    }

    return 0;
}