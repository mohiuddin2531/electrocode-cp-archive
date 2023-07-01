#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string s; cin>>s; 
    int len = s.length(); 
    string test = "hello";
    int x = 0; 
    forn(i, len){
        if(s[i]==test[x]) x++; 
    }
    if(x==5) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}