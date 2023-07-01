#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n; 
        int even=0, odd=0, oddMin = INT_MAX, a[n]; 
        bool flag=true; 
        forn(i, n){
            cin>>a[i]; 
            if(a[i]%2!=0) oddMin = min(a[i], oddMin); 
        } 
        forn(i, n){
            if(a[i]%2==0) even++;
            else{
                if(a[i]>oddMin) even++;
            }
        }
        forn(i, n){
            if(a[i]%2!=0) odd++;
            else{
                if(a[i]>oddMin) odd++;
            }
        }
        cout<<(even == n || odd == n ? "YES\n" : "NO\n"); 
    }
    return 0;
}
