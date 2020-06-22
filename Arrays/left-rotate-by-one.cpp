//  Problem Statement: Left rotate an array by 1 unit.
//  Time Complexity: O(n)
//  Auxilary Space: O(1)

#include <bits/stdc++.h>

#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);
#define all(a) a.begin(), a.end()
#define ld long double
using namespace std;

void leftRotate(vector<int> &v, int n)
{
    int temp = v[0];
    for (int i = 1; i < n; i++)
    {
        v[i - 1] = v[i];
    }
    v[n - 1] = temp;
}

//Driver function
int main()
{
    vector<int> v{10, 2, 3, 4, 8};

    leftRotate(v, v.size());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}