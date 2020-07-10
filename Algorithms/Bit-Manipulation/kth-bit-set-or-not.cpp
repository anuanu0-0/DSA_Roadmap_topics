#include <bits/stdc++.h>

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using namespace std;

int main()
{
    int num, k;
    cin >> num >> k;

    if (num & (1 << (k - 1) != 0))
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}

//ALT: if((n>>(k-1)) & 1 == 1 )  ==> "YES"