#include <bits/stdc++.h>
using namespace std;

int table[256];
// Naive Solution TC: O(total bits in n)
void countSetNaive(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res + (n & 1);
        n = n >> 1;
    }
    cout << res;
}

// Brain Kerningam's Algorithm TC: O(set bit count)
void countSetBK(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    cout << res;
}

// Table Lookup Method  TC:O(1)
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
void countSetFAST(int n)
{
    int res = table[n & 0xff] +
              table[(n >> 8) & 0xff] +
              table[(n >> 16) & 0xff] +
              table[n >> 24];

    cout << res << '\n';
}
int main()
{
    int n;
    cin >> n;
    //countSetNaive(n);
    // countSetBK(n);
    initialize();
    countSetFAST(n);
    return 0;
}