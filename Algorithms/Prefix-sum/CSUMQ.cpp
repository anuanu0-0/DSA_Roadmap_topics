// SPOJ
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

int main()
{
    int n, sum = 0;
    cin >> n;

    vector<int> prefix_sum(n + 1);
    for (int i = 0; i < n; i++)
    {

        cin >> prefix_sum[i];
        sum += prefix_sum[i];
        prefix_sum[i] = sum;
    }

    int q;
    cin >> q;
    vector<pair<int, int>> vp(q + 1);
    for (int i = 0; i < q; i++)
    {
        cin >> vp[i].first;
        cin >> vp[i].second;
    }

    for (int i = 0; i < q; i++)
    {
        if (vp[i].first - 1 >= 0)
        {
            cout << prefix_sum[vp[i].second] - prefix_sum[vp[i].first - 1] << endl;
        }
        else
        {
            cout << prefix_sum[vp[i].second] << endl;
        }
    }

    return 0;
}