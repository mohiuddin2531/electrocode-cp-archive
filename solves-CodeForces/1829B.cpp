#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin>>n;
        int cnt = 0, ans = 0; 
        forn(i, n){
            int x; cin>>x; 
            if(x==0) cnt++; 
            else{
                ans = max(ans, cnt); 
                cnt = 0; 
            }
        }
        cout<<max(ans, cnt)<<endl; 
    }
    return 0;
}
