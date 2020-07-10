#include <bits/stdc++.h>

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using namespace std;

int main()
{
    FAST int num;
    cin >> num;

    if ((num != 0) && (num & (num - 1)) == 0)
        cout << "Yes";

    else
        cout << "No";
    return 0;
}
