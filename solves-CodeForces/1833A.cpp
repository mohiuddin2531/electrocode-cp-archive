#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n; 
        set<string>melody; 
        string s; cin>>s; 
        for(int i=1; i<n; i++){
            string tmp = s.substr(i-1, 2); 
            melody.insert(tmp);
        }
        cout<<melody.size()<<"\n";
    }
    return 0;
}
