#include<bits/stdc++.h>
using namespace std; 

int32_t main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n; cin>>n; 
    map<int, int>pf_exp; 
    for(int i = 2; i*i <= n; i++){
        if(n%i==0){
            pf_exp[i]=0;
            while(n%i==0){
                pf_exp[i]++;
                n/=i; 
            } 
        }
    }
    if(n>1) pf_exp[n]=1;
    for(auto x:pf_exp){
        cout<<x.first<<"  "<<x.second<<" ";
    } 
    return 0; 
}