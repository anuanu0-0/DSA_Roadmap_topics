//  TIME COMPLEXITY: O(n)
//  SPACE COMPLEXITY: O(1)
//  Ex- Input: arr[] = {10, 20, 20, 30, 30, 30, 40}
//      Output: arr[] = {10,20, 30, 40, _, _, _}
//                                  /\
//                                  ||
//                                  temp variable pointing at new end.

// ALT: Use set , Auxilary space: O(n)
#include <iostream>
#include <vector>
#include <math.h>

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using namespace std;

void removeDuplicates(vector<int> v)
{
    int n = v.size(), res = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[res - 1] != v[i])
        {
            v[res] = v[i];
            res++;
        }
    }

    //  res points to new location with sorted array with duplicates
    for (int i = 0; i < res; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    FAST
        vector<int>
            v{10, 20, 20, 30, 30, 30, 40};
    removeDuplicates(v);
    return 0;
}
