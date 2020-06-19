//Sieve of Eratosthenes
#include <bits/stdc++.h>

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define ll long long
using namespace std;

int primeSieve(int n)
{
    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {

                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime[i] == true)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    FAST int n;
    cin >> n;
    int primes = primeSieve(n);
    cout << primes << '\n';
    return 0;
}