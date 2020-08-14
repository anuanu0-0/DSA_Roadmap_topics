#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// Euler Tree
void print_zigzag(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    print_zigzag(n - 1);
    cout << n << " ";
    print_zigzag(n - 1);
    cout << n << " ";
}

int main()
{
    print_zigzag(13);
}