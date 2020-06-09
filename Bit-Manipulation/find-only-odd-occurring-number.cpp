//This SOL: Uses xor operator, TC:O(n) & AS:O(1)
//ALT: Use hashing (unordered_map) , TC: O(n) & AS: O(n)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 6, 7, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res = res ^ arr[i];
    }

    cout << res;
    return 0;
}