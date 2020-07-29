#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

int table[256];

void initialize()
{
    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
int main()
{
    int t = 1;
    cin >> t;
    initialize();
    while (t--)
    {
        int n;
        cin >> n;
        int res = table[n & 0xff] +
                  table[(n >> 8) & 0xff] +
                  table[(n >> 16) & 0xff] +
                  table[(n >> 24) & 0xff];
        cout << res;
        return 0;
    }
