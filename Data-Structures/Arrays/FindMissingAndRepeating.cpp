//  TC: O(n), AS: O(1)

#include <bits/stdc++.h>
using namespace std;

#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define endl '\n'
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define REPR(i, a, b) for (int i = a; i >= b; i--)
#define REPS(i, a, b, step) for (int i = a; i < b; i += step)
#define REPRS(i, a, b, step) for (int i = a; i >= b; i -= step)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

int main(int argc, const char **argv)
{
    
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        vi b(n, 0);
        int repeating = 0, missing = 0;
        for(int i=0; i<n; i++) {
           cin>>a[i];
        }
        for(int i=0; i<n; i++) {
            if(b[a[i]-1] == -1) {
                repeating = a[i];
            }
            b[a[i]-1] = -1;
        }
        
        for(int i=0; i<n; i++) {
            
            if(b[i] == 0) {
                missing = i+1;
            }
        }
        
        cout <<repeating<<" "<<missing<< endl;
    }
    return 0;
}
