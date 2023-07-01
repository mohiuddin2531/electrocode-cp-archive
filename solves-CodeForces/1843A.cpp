#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int len; cin>>len; 
        int arr[len]; 
        forn(i, len) cin>>arr[i];
        sort(arr, arr+len); 
        int cost = 0; 
        for(int i = 0, j = len - 1; i<j; i++, j--){
            cost+=arr[j]-arr[i]; 
        }
        cout<<cost<<"\n";
    }
    return 0;
}
