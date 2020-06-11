#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

int main()
{
    FAST int t = 1;
    cin >> t;

    unsigned int odd = 0, even = 0;

    while (t--)
    {
        unsigned int n;
        cin >> n;
        odd = 0xAAAAAAAA & n;
        even = 0x55555555 & n;
        unsigned int res = (odd >> 1) | (even << 1);
        cout << res << '\n';
    }
}
