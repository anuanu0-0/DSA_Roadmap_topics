//ALT: LookUp table

#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

int main()
{
    FAST int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        while (n > 0)
        {
            n = n & (n - 1);
            res++;
        }
        cout << res << '\n';
    }
    return 0;
}
