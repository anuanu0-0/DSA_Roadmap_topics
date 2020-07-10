//  PROBLEM STATEMENT: Find out the maximum difference between any two elements
//  such that larger element appears after the smaller number.
//  TIME COMPLEXITY: O(n)
//  AUXILARY SPACE: O(1)

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

int maxDiff(vector<int> v)
{
    int n = v.size(), maxV = 0, minV = v[0];
    int res = v[1] - v[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, v[i] - minV);
        minV = min(minV, v[i]);
    }

    return res;
}

int main()
{
    vector<int> v{2, 3, 10, 6, 4, 8, 1};
    int res = maxDiff(v);
    cout << res << '\n';
    return 0;
}