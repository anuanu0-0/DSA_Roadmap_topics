//  Time Complexity : Theta(log n)  , where n is the number of elements
//  Auxilary Space : -> Iterative O(1)
//                   -> Recursive O(log n), due to recursion stack space

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

//Iterative solution
void bs_iterative(vector<int> v, int target)
{
    int n = v.size();
    int low = 0, high = n - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] == target)
        {
            cout << "Found at pos: " << mid + 1;
            return;
        }
        else if (v[mid] < target)
        {
            low = mid + 1;
        }
        else if (v[mid] > target)
        {
            high = mid - 1;
        }
    }

    cout << "Not Found ";
}

//Recursive solution
void bs_recursive(int low, int high, vector<int> v, int target)
{

    if (high >= low)
    {
        int mid = low + (high - 1) / 2;

        if (v[mid] == target)
        {
            cout << "Found at pos: " << mid + 1;
            return;
        }
        if (v[mid] > target)
            return bs_recursive(low, mid - 1, v, target);

        return bs_recursive(mid + 1, high, v, target);
    }
    cout << "Not Found";
    return;
}

//Using C++ STL
void bs_stl(vector<int> v, int target)
{
    binary_search(v.begin(), v.end(), target) ? cout << "Found" : cout << "Not Found";
}
int main()
{
    FAST
        vector<int>
            v = {10, 15, 20, 25, 30, 35};
    int target = 20;

    //If not sorted
    //sort(v.begin(), v.end());

    bs_iterative(v, target);
    bs_recursive(0, v.size(), v, target);
    bs_stl(v, target);

    return 0;
}