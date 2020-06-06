#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
    int a[] = {5, 8, -4, -4, 9, -2, 2};
    int target_sum = 0;
    int len = sizeof(a) / sizeof(a[0]);

    unordered_map<int, int> um;
    int pre_sum = 0, res = 0;
    for (int i = 0; i < len; i++)
    {
        pre_sum = pre_sum + a[i];
        if (pre_sum == target_sum)
            res = i + 1;
        if (um.find(pre_sum) == um.end())
            um.insert({pre_sum, i});
        if (um.find(pre_sum - target_sum) != um.end())
            res = max(res, i - um[pre_sum - target_sum]);
    }
    cout << res << endl;
    return 0;
}

//Time Complexity: O(n)
//Auxilary Space: O(n)