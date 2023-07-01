#include<bits/stdc++.h>
using namespace std;
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n; 
    string s; cin>>s; 
    bool flag = false; 
    for(int i = 0; i<n; i++){
        if(s[i]=='x'){
            flag = false;
            break;  
        }
        if(s[i]=='o'){
            flag = true; 
        }
    }
    if(flag) cout<<"Yes\n"; 
    else cout<<"No\n";
    return 0;
}
