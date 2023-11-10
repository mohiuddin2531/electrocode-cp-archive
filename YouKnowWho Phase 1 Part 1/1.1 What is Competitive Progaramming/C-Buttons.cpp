#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, ans = 0; cin>>a>>b;
    if(a==b || abs(a-b)==1){
        ans = a+b; 
    }
    else{
        ans = 2*max(a, b)-1;  
    }
    cout<<ans<<"\n";
    return 0;
}