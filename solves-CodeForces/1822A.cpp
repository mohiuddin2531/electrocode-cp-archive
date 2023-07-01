#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q; cin >> q;
    while (q--) {
        int n, t; cin>>n>>t; 
        int a[n], b[n];
        forn(i, n) cin>>a[i];
        forn(i, n) cin>>b[i];
        int ent = -1, best = -1; 
        forn(i, n){
            if(t-a[i]-i>=0 && ent<b[i]){
                ent = b[i]; 
                best = i+1; 
            }
        }
        cout<<best<<"\n";
    }
    return 0;
}
