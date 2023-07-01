#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n; 
        int a[n]; 
        forn(i, n) cin>>a[i]; 
        sort(a, a+n);
        bool flag = true; 
        if(a[0]%2==1){
            cout<<"YES\n"; 
            continue;
        } 
        forn(i, n){
            if(a[i]%2==1){
                flag = false;  
                break; 
            } 
        }
        cout<<(flag ? "YES\n" : "NO\n"); 
    }
    return 0;
}
