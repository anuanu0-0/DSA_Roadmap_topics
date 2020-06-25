// PROBLEM STATEMENT
//  The cost of stock on each day is given in an array A[] of size N.
//  Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

// Time Complexity: O(N)
//Auzilary Space: O(1)
#include <bits/stdc++.h>
#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define init(arr, val) memset(arr, val, sizeof(arr))
#define ull unsigned long long int
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);

using namespace std;

int maxProfit(vector<int> v)
{
    int n = v.size();
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
        {
            res += (v[i] - v[i - 1]);
        }
    }

    return res;
}

int main()
{
    FAST
        vector<int>
            v{1, 5, 3, 8, 12};
    int res = maxProfit(v);
    cout << res << '\n';
    return 0;
}