#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

const ll N = 1e7 + 9; 
bitset<N>flag; 

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);  
    flag[1] = true; 
    for(int i = 2; (long long)i*i<=N; i++){
        if(!flag[i]){
            for(int j = i*i; j<=N; j+=i){
                flag[j] = true; 
            }
        }
    }
    int n; cin>>n; 
    for(int i = 0; i<n; i++){
        ll x; cin>>x; 
        ll rt = sqrt(x);  
        if(!flag[rt] && rt*rt == x) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
