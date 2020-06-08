//Sieve of Eratosthenes

#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define ll long long
using namespace std;

void primeSieve(int n)
{

    vector<bool> prime(n + 1);

    //special case
    prime[2] = true;
    prime[1] = prime[0] = false;

    //As any even number cannot be prime except 2 therefore mark only odd numbers
    for (ll i = 3; i <= n; i += 2)
    {
        prime[i] = true;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
            for (ll j = i * i; j <= n; j += i)
                prime[j] = false;
    }

    for (ll i = 2; i <= n; i++)
        if (prime[i])
            cout << i << " ";
}

int main()
{
    FAST ll n;
    cin >> n;
    primeSieve(n);
    return 0;
}