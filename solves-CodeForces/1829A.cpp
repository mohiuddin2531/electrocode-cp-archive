#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin>>s; 
        string sample =  "codeforces"; 
        int cnt = 0; 
        forn(i, 10){
            if(s[i]!=sample[i]) cnt++; 
        }
        cout<<cnt<<"\n"; 
    }
    return 0;
}
