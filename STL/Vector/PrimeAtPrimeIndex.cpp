// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<int> prime(100005, 0);

void sieve()
{
    prime[0] = 1;
    prime[1] = 1;
    for (int i = 2; i <= 100000; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i + i; j <= 100000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

vector<int> prime_at_prime(vector<int> v)
{
    vector<int> res;

    sieve();

    for (int i = 1; i <= v.size(); i++)
    {
        if (prime[v[i - 1]] == 0 && prime[i] == 0)
        {
            res.push_back(v[i - 1]);
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            v.push_back(m);
        }
        vector<int> result = prime_at_prime(v);
        for (auto i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends