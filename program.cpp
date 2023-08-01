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
        int n, k; cin>>n>>k; 
        int problems[n];
        forn(i, n) cin>>problems[i]; 
        sort(problems, problems+n); 
        int cnt = 1, max = 0; 
        for(int i = 1; i<n; i++){
            if(problems[i]-problems[i-1]<=k) cnt++; 
            else{
                if(cnt>max) max = cnt; 
                cnt = 1; 
            }
        }
        if(cnt>max) max = cnt; 
        if(max==0) cout<<0<<endl; 
        else cout<<n-max<<endl; 

    }
    return 0;
}