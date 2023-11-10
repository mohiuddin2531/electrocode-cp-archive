#include <bits/stdc++.h>
using namespace std;

const int N = 3001; 
bitset<N> f; 

void check_prime(){
    f[1]=true; 
    for(int i = 2; i*i <= N; i++){
        if(!f[i]){
            for(int j = i*i; j<=N; j+=i){
                f[j] = true; 
            }
        }
    }
}

bool is_almost_prime(int n){
    int cnt = 0; 
    for(int i = 1; i<=n; i++){
        if(n%i==0 && !f[i]) cnt++; 
    }
    if(cnt==2) return true;
    else return false; 
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n; 
    check_prime(); 
    int cnt = 0; 
    for(int i = 1; i<=n; i++){
        if(is_almost_prime(i)) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}