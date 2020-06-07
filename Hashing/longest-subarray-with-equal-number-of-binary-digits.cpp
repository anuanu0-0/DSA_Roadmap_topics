//--WORKING

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
    int a[] = {0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0};
    int len = sizeof(a) / sizeof(a[0]);

    unordered_map<int, int> um;
    int pre_sum = 0, res = 0, end_index = -1;

    for (int i = 0; i < len; i++)
        if (a[i] == 0)
            a[i] = -1;

    for (int i = 0; i < len; i++)
    {
        pre_sum = pre_sum + a[i];
        if (pre_sum == 0)
        {
            res = i + 1;
            end_index = i;
        }
        if (um.find(pre_sum + len) != um.end())
        {
            if (res < i - um[pre_sum + len])
            {
                res = i - um[pre_sum + len];
                end_index = i;
            }
        }
        else // Else put this sum in hash table
            um[pre_sum + len] = i;
    }

    for (int i = 0; i < len; i++)
        a[i] = (a[i] == -1) ? 0 : 1;

    cout << res << endl;
    return 0;
}
