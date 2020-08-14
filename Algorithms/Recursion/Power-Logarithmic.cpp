#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
ll pow(ll x, ll n)
{
    if (n == 0)
        return 1;
    ll xnb2 = pow(x, n / 2);
    ll res = xnb2 * xnb2;

    if (n % 2 != 0)
    {
        res = res * x;
    }

    return res;
}

int main()
{
    ll power = pow(2, 40);
    cout << power << endl;
}