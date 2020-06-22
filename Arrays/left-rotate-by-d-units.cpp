//  Problem Statement: Left rotate an array by d units.
//  Time Complexity: O(n)
//  Auxilary Space: O(1)

// Eg: arr[] =  {1,2,3,4,5,6} and we want to rotate it by d = 2.
// We can achieve it by making the a point/element act as a pivot like  {1,2 | 3,4,5,6}.
//                                                                           /\
//                                                                           ||
//                                                                           pivot
// Now we just want to swap the left and right side of pivot to swap with each other.
// So, for it to happen we just swap both the left and right side seperately as   {2,1 | 6,5,4,3}.
// And twice swapping/reversing the elements bring them back to there original order.  {3,4,5,6 | 1,2}
// which is our desired output.

#include <bits/stdc++.h>
#include <algorithm>
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

void leftRotateDunits(vector<int> &v, int d)
{
    int n = v.size();
    if (d == 0)
        return;
    if (d > n)
        d = d - n;

    reverse(v.begin(), v.begin() + (d - 1));
    reverse(v.begin() + d, v.end());
    reverse(v.begin(), v.end());
}

//Driver function
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    int d;
    cin >> d;
    leftRotateDunits(v, d);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}