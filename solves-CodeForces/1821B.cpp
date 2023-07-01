#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define forn(i, n) for (int i = 0; i < int(n); i++)
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n; 
        int a[n], b[n];
        forn(i, n) cin>>a[i];
        forn(i, n) cin>>b[i];
        int l = 0, r = 0; 
        forn(i, n){
            if(a[i]!=b[i]){
                l = i; 
                break; 
            }
        }
        for(int i = n-1; i>=0; i--){
            if(a[i]!=b[i]){
                r = i; 
                break; 
            }
        }
        for(int i = l-1; i>=0; i--){
            if(b[i]>b[i+1]) break; 
            if(a[i]==b[i]) l = i; 

        }
        for(int i = r+1; i<n; i++){
            if(b[i]<b[i-1]) break; 
            if(a[i]==b[i]){
                r = i; 
            }
        }
        cout<<l+1<<" "<<r+1<<"\n";
    }
    return 0;
}
