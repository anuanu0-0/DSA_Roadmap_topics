// Algorithm: 1. Make a boolean array of input size and intialize with true.
//            2. Mark 0 & 1 as false.
//            3. For every i from 2 to root(n)
//                  3.1 Mark all multiples of i starting from i*i as false
//            4. Return the count of total primes or the print the array with values=true.

// Example:
//    Let n = 50. So we need to print all prime numbers smaller than or equal to 50.
//    We create a list of all numbers from 2 to 50.
//    According to the algorithm we will mark all the numbers which are divisible by 2 and are greater than or equal to the square of it.
//    Now we move to our next unmarked number 3 and mark all the numbers which are multiples of 3 and are greater than or equal to the square of it.
//    We move to our next unmarked number 5 and mark all multiples of 5 and are greater than or equal to the square of it.
//    We continue this process until our pointer reaches last element.
//    So the prime numbers are the unmarked ones: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47.

//  TIME COMPLEXITY: O(nloglogn)
//  SPACE COMPLEXITY: O(n)

//  Sieve of Eratosthenes
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

//Refer:
//   https://www.geeksforgeeks.org/sieve-of-eratosthenes/
//   For variations and problems:
//   https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
