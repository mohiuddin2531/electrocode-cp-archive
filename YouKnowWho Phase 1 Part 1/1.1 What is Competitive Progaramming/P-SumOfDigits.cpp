#include <bits/stdc++.h>
using namespace std;
int sum_of_digits(int n){
    int sum = 0.; 
    while(n>0){
        sum+=n%10; 
        n/=10; 
    }
    return sum; 
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin>>s; 
    int len = s.length(), n=0, cnt = 0; 
    if(len==1){
        cout<<0<<"\n";
        return 0; 
    }
    for(int i = 0; i<len; i++){
        n+=s[i]-'0'; 
    }
    cnt++;
    while(n>9){
        n = sum_of_digits(n);
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}