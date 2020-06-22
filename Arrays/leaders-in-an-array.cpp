// Problem Link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array/1/
// Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

// Function to find the leaders in an array of size n
vector<int> leaders(int arr[], int n)
{

    // Your code here

    /******************
     * You just need to complete this
     * function and return the vector
     * containing the leaders.
     * ***************/
    vector<int> v;
    int max = arr[n - 1];
    v.push_back(max);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            v.push_back(max);
        }
    }

    return v;
}

// { Driver Code Starts.

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        int a[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> v = leaders(a, n);

        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }
}
// } Driver Code Ends