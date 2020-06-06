#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int T = 1;
    cin >> T;

    while (T--)
    {
        int N, sum = 0;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        unordered_map<int, int> um;
        for (int i = 0; i < N; i++)
            um[arr[i]]++;

        for (auto x : um)
        {

            if (x.second % 2 == 0)
                sum += x.second;
            else
                sum += (x.second - 1);
            cout << x.first << " " << x.second << " " << sum << '\n';
        }

        cout << sum << '\n';
    }
    return 0;
}