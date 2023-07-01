#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int len; cin>>len; 
        string s; cin>>s; 
        forn(i, len){
            char tmp = s[i]; 
            cout<<s[i++];
            while(s[i]!=tmp) i++; 
        }
        cout<<"\n";
    }
    return 0;
}
