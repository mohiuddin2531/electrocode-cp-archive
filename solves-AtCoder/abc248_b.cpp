#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, k, shout = 0; cin>>a>>b>>k; 
    while(a<b){
        a*=k;
        shout++;
    }
    cout<<shout<<"\n";
    return 0;
}
