#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define forn(i, n) for (int i = 0; i < int(n); i++)
const int N = 1e7 + 9;

int32_t main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

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