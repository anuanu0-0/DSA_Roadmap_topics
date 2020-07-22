
#include <bits/stdc++.h>
using namespace std;

int findFrequency(vector<int> v, int x)
{
    sort(v.begin(), v.end());
    vector<int>::iterator low = v.begin(), high = v.begin();

    low = lower_bound(v.begin(), v.end(), x);
    high = upper_bound(v.begin(), v.end(), x);

    return (high - low);
}

int main()
{

    int testcase;

    cin >> testcase;

    while (testcase--)
    {
        int N;
        cin >> N;

        vector<int> v;

        for (int i = 0; i < N; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }

        int x;
        cin >> x;

        cout << findFrequency(v, x) << endl;
    }

    return 0;
}