#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> array_of_Pairs(int arr[], int N)
{
    int size;

    if (N % 2 == 0)
        size = N / 2;
    else
        size = N / 2 + 1;

    vector<pair<int, int>> vp(size);
    int low = 0, high = N - 1;
    while (low <= high)
    {
        vp[low] = {arr[low], arr[high]};
        low++;
        high--;
    }

    return vp;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];

        for (int i = 0; i < N; i++)
            cin >> arr[i];
        vector<pair<int, int>> res = array_of_Pairs(arr, N);

        for (int i = 0; i < res.size(); i++)
        {
            cout << "(" << res[i].first << "," << res[i].second << ") ";
        }
        cout << endl;
    }
    return 0;
}
