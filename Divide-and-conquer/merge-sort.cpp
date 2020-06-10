#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

// Key fn: merge 2 sorted subarrays
void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    //int *left = new int[n1], *right = new int[n2];
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i];
            i++;
        }
        else
        {
            arr[k++] = right[j];
            j++;
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i];
        i++;
    }
    while (j < n2)
    {
        arr[k++] = right[j];
        j++;
    }
}

void mergeSort(int arr[], int l, int h)
{

    if (l < h)
    {
        int m = l + (h - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);

        merge(arr, l, m, h);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    FAST int arr[] = {3, 4, 2, 9, 1, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);
    print(arr, size);

    return 0;
}