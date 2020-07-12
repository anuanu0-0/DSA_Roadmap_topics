//  ACTIVITY SELECTION PROBLEM :
//  PROBLEM STATEMENT
//  You are given n activities with their start and finish times. Select the maximum number of activities
//  that can be performed by a single person, assuming that a person can only work on a single activity at a time.

//Time Complexity: O(nlogn), if array is not sorted else if sorted then O(n).
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Activity
{
public:
    int start;
    int finish;
};

bool compare(Activity a, Activity b)
{
    return (a.finish < b.finish);
}

void printMaxActivities(Activity act[], int n)
{
    sort(act, act + n, compare);
    int i = 0;
    cout << act[i].start << " " << act[i].finish << endl;
    for (int j = 1; j < n; j++)
    {
        if (act[j].start >= act[i].finish)
        {
            cout << act[j].start << " " << act[j].finish << endl;
            i = j;
        }
    }
}

int main()
{
    int n = 5;
    Activity act[n];
    for (int i = 0; i < n; i++)
    {
        cin >> act[i].start >> act[i].finish;
    }

    printMaxActivities(act, n);

    return 0;
}