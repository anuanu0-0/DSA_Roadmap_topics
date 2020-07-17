
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void sumTriangles(int n, int mat[SIZE][SIZE])
{
    int sum_upper = 0, sum_lower = 0;
    //Upper triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum_upper += mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum_lower += mat[i][j];
        }
    }
    cout << sum_upper << " " << sum_lower;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int r, n, c, us = 0, ls = 0;
        cin >> n;
        r = n;
        c = r;
        int i, j, mat[SIZE][SIZE];
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                cin >> mat[i][j];
        }

        sumTriangles(r, mat);

        cout << endl;
    }
    return 0;
}