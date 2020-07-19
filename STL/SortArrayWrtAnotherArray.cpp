#include <utility>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortOther(vector<int> a, vector<char> b)
{
    vector<pair<int, char>> vp(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        vp[i] = {a[i], b[i]};
    }

    sort(vp.begin(), vp.end());

    for (int i = 0; i < a.size(); i++)
    {
        cout << vp[i].second << " ";
    }
}

int main()
{
    vector<int> a = {3, 1, 4, 7, 5};
    vector<char> b = {'E', 'A', 'K', 'B', 'G'};
    sortOther(a, b);
}