#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n; 
    int arr[n]; 
    forn(i, n){
        cin>>arr[i]; 
    }
    int x, res = -1; cin>>x; 
    forn(i, n){
        if(arr[i]==x){
            res = i; 
            break; 
        } 
    }
    cout<<res<<"\n";
    return 0;
}