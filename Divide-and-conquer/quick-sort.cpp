/*
    KEY part of quick sort algorithm is partioning algorithm.
    This solution contains 2 standard partioning algorithms -> Lomuto and Hoare's
    TC: worst case -> Theta(n^2), average case -> Theta(nlog n)
    AS: worst case -> Theta(n), best case -> Theta(log n)
    Quick Sort is considered UNSTABLE because the partitioning algo's are unstable. 
*/

#include <iostream>
#include <algorithm>

using namespace std;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//------------Lomuto's partition Algorithm-------------//

int l_partition(int arr[], int l, int h)
{ //It always uses last element as pivot
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return i + 1;
}

//Quick Sort Function  with Lomuto's algorithm
void l_qsort(int arr[], int l, int h)
{

    if (l < h)
    {
        int p = l_partition(arr, l, h);
        l_qsort(arr, l, p - 1);
        l_qsort(arr, p + 1, h);
    }
}

//---------------Hoare's partition Algorithm----------------//

int h_partition(int arr[], int l, int h)
{
    //It always uses pivot as the first element
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;
        swap(&arr[i], &arr[j]);
    }
}

//Quick Sort Function  with Hoare's algorithm
void h_qsort(int arr[], int l, int h)
{

    if (l < h)
    {
        int p = h_partition(arr, l, h);
        h_qsort(arr, l, p);
        h_qsort(arr, p + 1, h);
    }
}

//Print sorted array
void printSorted(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

//Driver function
int main()
{
    FAST int arr[] = {3, 4, 2, 9, 1, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    //Hoare's fn call
    h_qsort(arr, 0, size - 1);

    //Lomuto's fn call
    //l_qsort(arr, 0, size - 1);

    printSorted(arr, size - 1);
    return 0;
}