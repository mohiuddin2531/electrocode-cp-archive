#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin>>s; 
        int len = s.length(), cnt = 0, min = INT_MAX, max = 0; 
        for(char i = 'a'; i<='z'; i++){
            cnt = 0, max = 0; 
            for(int j = 0; j<len; j++){
                if(s[j]!=i){
                    cnt++; 
                    if(cnt > max) max = cnt; 
                }
                else{
                    cnt = 0; 
                }
            }
            if(max < min){
                min = max; 
            }

        }
        cnt = 0; 
        while(min!=1 && min!=0){
            min/=2; 
            cnt++; 
        }
        cout<<cnt+min<<"\n"; 
    }
    return 0;
}
