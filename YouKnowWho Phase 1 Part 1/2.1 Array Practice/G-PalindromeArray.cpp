#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n; 
    int arr[n]; 
    forn(i, n) cin>>arr[i];
    int limit = n/2; 
    forn(i, limit){
        if(arr[i]!=arr[n-1-i]){
            cout<<"NO\n";
            return 0; 
        }
    }
    cout<<"YES\n";
    return 0;
}