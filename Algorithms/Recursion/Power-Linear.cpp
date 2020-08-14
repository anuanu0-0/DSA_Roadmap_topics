#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
ll pow(ll x, ll n)
{
    if (n == 0)
        return 1;

    return x * pow(x, n - 1);
}

int main()
{
    ll power = pow(2, 4);
    cout << power << endl;
}