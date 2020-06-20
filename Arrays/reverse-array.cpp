

#include <iostream>
#include <vector>
#include <math.h>

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using namespace std;

void reverseArray(vector<int> &v)
{
    int len = v.size();
    int mid = (int)len / 2;
    int nextMid = ceil(len / 2) + 1;

    for (int i = 0, j = len - 1; i < mid && j >= nextMid - 1; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    for (int i = 0; i < len; i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';
}

int main()
{
    FAST

        //  Odd input
        vector<int>
            v1{5, 4, 3, 2, 1};
    //  Even input
    vector<int> v2{4, 3, 2, 1};

    reverseArray(v1);
    reverseArray(v2);
    return 0;
}
