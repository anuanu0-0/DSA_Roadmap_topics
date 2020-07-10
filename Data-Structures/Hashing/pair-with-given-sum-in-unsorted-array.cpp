#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
    int a[] = {3, 1, 8, 15, -8};
    int target_sum = 17;
    int len = sizeof(a) / sizeof(a[0]);
    bool check = false;
    unordered_set<int> s;

    for (int i = 0; i < len; i++)
    {
        if (s.find(target_sum - a[i]) != s.end())
        {
            check = true;
            break;
        }
        s.insert(a[i]);
    }

    cout << check << endl;

    return 0;
}