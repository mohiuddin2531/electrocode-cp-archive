#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        ll n; cin>>n;
        ll sum = n*(n+1)/2; 
        for(ll i = 1; i<=n; i*=2){ 
            sum -= 2*i; 
        }
        cout<<sum<<"\n";
    }
    return 0;
}