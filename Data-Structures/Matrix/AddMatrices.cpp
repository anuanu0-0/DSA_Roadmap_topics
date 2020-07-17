#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

// } Driver Code Ends

/*  Function to find sum of matrices
*   n1, m1, n2, m2: rows and columns of matrices respectively
*   arr1[][], arr2[][]: two input matrices
*/
void sumMatrix(int n1, int m1, int n2, int m2, int arr1[SIZE][SIZE], int arr2[SIZE][SIZE])
{
    if (n1 != n2 || m1 != m2)
    {
        cout << "-1";
        return;
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
    }
}

int main()
{
    int t;
    cin >> t; //input the number of testcases

    while (t--) //while testcases exist
    {
        int n1, m1; //input rows and columns of matrix 1
        cin >> n1 >> m1;
        int arr1[SIZE][SIZE]; //initialize the matrix 1 with n1 row and m1 columns.
        for (int i = 0; i < n1; i++)
            for (int j = 0; j < m1; j++)
                cin >> arr1[i][j]; //inputting the data in the matrix 1

        int n2, m2; //input rows and columns of matrix 2
        cin >> n2 >> m2;
        int arr2[SIZE][SIZE]; //initialize the matrix 2 with n2 row and m2 columns.
        for (int i = 0; i < n2; i++)
            for (int j = 0; j < m2; j++)
                cin >> arr2[i][j]; //inputting the data in matrix 2

        sumMatrix(n1, m1, n2, m2, arr1, arr2);
        cout << endl;
    }

    return 0;
}