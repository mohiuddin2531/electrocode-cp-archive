#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define forn(i, n) for (int i = 0; i < int(n); i++)
const int N = 1e7 + 9;

int32_t main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int n, cnt = 0; cin>>n; 
        while(n--){
            int a, b; cin>>a>>b; 
            if(a>b)cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}