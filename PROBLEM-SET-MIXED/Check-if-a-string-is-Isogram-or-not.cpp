
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool isIsogram(string s)
{
    unordered_set<int> us;
    for (int i = 0; i < s.length(); i++)
    {
        if (us.find(s[i]) != us.end())
        {
            return false;
        }

        us.insert(s[i]);
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;

        cout << isIsogram(s) << endl;
    }
    return 0;
}
