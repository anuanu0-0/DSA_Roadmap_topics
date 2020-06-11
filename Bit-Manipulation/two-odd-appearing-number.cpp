#include <bits/stdc++.h>
using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

int main()
{   FAST
    int arr[] = {1, 2, 3, 2, 1, 6, 7, 7, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < size; i++)
    {
        XOR = XOR ^ arr[i];
    }
    int setBit = (XOR) & (~(XOR - 1));

    for (int i = 0; i < size; i++)
    {
        if ((setBit & arr[i]) != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }

    cout << res1 << " " << res2;
    return 0;
}
