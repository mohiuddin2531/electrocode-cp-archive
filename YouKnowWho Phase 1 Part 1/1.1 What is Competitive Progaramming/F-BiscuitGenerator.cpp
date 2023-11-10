#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, t, cnt=0; cin>>a>>b>>t; 
    for(int i = t; i>=a; i-=a){
        cnt+=b; 
    }  
    cout<<cnt<<"\n"; 
    return 0;
}