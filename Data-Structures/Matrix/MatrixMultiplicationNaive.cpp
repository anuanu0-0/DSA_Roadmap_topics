#include <bits/stdc++.h>
using namespace std;
#define SIZE 30

void multiplyMatrix(int n1, int m1, int n2, int m2, long long arr1[SIZE][SIZE], long long arr2[SIZE][SIZE])
{

    if (m1 != n2)
    {
        cout << "-1";
        return;
    }
    long long resMat[n1][m2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            resMat[i][j] = 0;
            for (int k = 0; k < m1; k++)
            {
                resMat[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << resMat[i][j] << " ";
        }
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n1, m1; //input rows and columns of matrix 1
        cin >> n1 >> m1;
        long long arr1[SIZE][SIZE]; //declare the matrix 1
        for (long long i = 0; i < n1; i++)
            for (long long j = 0; j < m1; j++)
                cin >> arr1[i][j]; //input the matrix 1

        int n2, m2;
        cin >> n2 >> m2;            //inputting the rows and columns of matrix 2
        long long arr2[SIZE][SIZE]; //declare the matrix 2
        for (long long i = 0; i < n2; i++)
            for (long long j = 0; j < m2; j++)
                cin >> arr2[i][j];
        multiplyMatrix(n1, m1, n2, m2, arr1, arr2);
        cout << endl;
    }

    return 0;
}