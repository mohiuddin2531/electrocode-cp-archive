#include <bits/stdc++.h>
using namespace std;
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, x, cnt = 0; cin>>n>>x; 
    for(int i= 1; i<=n; i++){
        if((long long)i*n>=x){
            if(x%i==0) cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}