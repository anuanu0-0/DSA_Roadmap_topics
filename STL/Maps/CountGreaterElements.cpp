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

void printGreater(vector<int> arr, int n)
{
    int count = 0;
    map<int, int, greater<int>()> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    int cum_freq = 0;

    for (auto it = map.rbegin(); it != map.rend(); it++)
    {
        int freq = it->second;
        it->second = cum_freq;
        cum_freq += freq;
    }

    for (int i = 0; i < n; i++)
        cout << map[arr[i]] << " ";
}

int main()
{
    FAST
        vector<int>
            arr = {2, 8, 10, 5, 3, 10};

    printGreater(arr, arr.size());
    return 0;
}