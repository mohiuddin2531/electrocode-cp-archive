#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+9; 
int spf[N]; 

int32_t main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i = 2; i<N; i++) spf[i] = i; 
    for(int i = 2; i<N; i++){
        if(spf[i]==i){
            for(int j = i; j<N; j+=i){
                spf[j] = min(spf[j], i); 
            }
        }
    }
    
    return 0;
}