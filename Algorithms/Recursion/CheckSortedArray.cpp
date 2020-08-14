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

bool is_Sorted(vector<int> a, int size)
{
    if (size == 0 || size == 1)
        return true;

    if (a[size - 2] > a[size - 1])
        return false;

    return is_Sorted(a, size - 1);
}

int main()
{
    FAST
        vector<int>
            a = {1, 2, 3, 4, 5, 6, 7};
    cout << is_Sorted(a, a.size());
    return 0;
}