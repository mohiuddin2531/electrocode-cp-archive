#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s, t; cin>>s>>t; 
    int cnt = 0; 
    for(int a = 0; a<=s; a++){
        for(int b = 0; b<=s; b++){
            for(int c = 0; c<=s; c++){
                if(a+b+c<=s && a*b*c<=t) cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}