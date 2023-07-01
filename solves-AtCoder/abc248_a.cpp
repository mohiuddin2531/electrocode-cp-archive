#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin>>s; 
    int chk[10];
    memset(chk, 0, sizeof(chk)); 
    int len = s.length(); 
    for(int i = 0; i<len; i++){
        int x = s[i]-'0'; 
        chk[x] = 1; 
    }
    for(int i = 0; i<10; i++){ 
        if(chk[i]==0){
            cout<<i<<"\n";
        }
    }
    return 0;
}
