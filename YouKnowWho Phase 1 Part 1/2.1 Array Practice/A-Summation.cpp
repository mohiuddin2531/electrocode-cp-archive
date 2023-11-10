#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n; cin>>n; 
    ll x = 0, sum = 0; 
    forn(i, n){
        cin>>x; 
        sum+=x; 
    }
    cout<<abs(sum)<<"\n"; 
    return 0;
}