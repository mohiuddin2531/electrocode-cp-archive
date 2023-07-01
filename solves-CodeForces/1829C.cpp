#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n; 
        map<string, int> book; 
        book["00"] = book["01"] = book["10"] = book["11"] = 1e9; 
        forn(i, n){
            int x; cin>>x; 
            string s; cin>>s; 
            book[s] = min(book[s], x); 
        }
        int ans = min(book["11"], book["01"]+book["10"]); 
        if(ans == 1e9){
            cout<< "-1\n"; 
        }
        else{
            cout<<ans<<"\n";
        }
    }
    return 0;
}
