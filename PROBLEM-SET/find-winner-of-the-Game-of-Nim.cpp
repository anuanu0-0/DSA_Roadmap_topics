#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        (s & 1) != 0 ? cout << "Player A" << '\n' : cout << "Player B";
    }

    return 0;
}
