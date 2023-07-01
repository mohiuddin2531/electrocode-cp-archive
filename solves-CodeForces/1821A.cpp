#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin>>s; 
        int len = s.length(); 
        int cnt = 1; 
        forn(i, len){
            if(s[i]=='0'&& i==0){
                cnt = 0; 
                break; 
            }
            if(i==0&&s[i]=='?'){
                cnt *= 9; 
            }
            else if(s[i]=='?'){
                cnt*=10; 
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
