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
    for(int i = n-1; i>=0; i--){
        cout<<arr[i]<<" "; 
    }
    return 0;
}