
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void printMinIndexChar(string str, string patt)
{
    unordered_set<int> us;
    for (int i = 0; i < patt.length(); i++)
        us.insert(patt[i]);
    for (int i = 0; i < str.length(); i++)
    {
        if (us.find(str[i]) != us.end())
        {
            cout << str[i];
            return;
        }
    }
    cout << "No character present" << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        string patt;
        cin >> str;
        cin >> patt;
        printMinIndexChar(str, patt);
        cout << endl;
    }
    return 0;
}
