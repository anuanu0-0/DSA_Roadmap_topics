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

int checkX(vector<int> a, int size, int x, int res = 0)
{
    if (size == 0 || res == size - 1)
        return -1;

    if (a[res] == x)
        return res;

    return checkX(a, size, x, res + 1);
}

int main()
{
    FAST
        vector<int>
            a = {1, 2, 3, 4, 5, 6, 7};
    int x = 5;
    int res = checkX(a, a.size(), x);
    if (res == -1)
        cout << "Not Found";
    else
        cout << "Found at index " << res + 1;
    return 0;
}