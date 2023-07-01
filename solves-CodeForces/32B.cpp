#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, strOut; cin>>s;
    int len = s.length(); 
    
    for(int i = 0; i<len; i++){
        string tmp;
        tmp+=s[i];
        tmp+=s[i+1];
        if(tmp=="-.") strOut+='1'; 
        else if(tmp=="--") strOut+='2'; 
        else{
            strOut+='0'; 
            continue;
        }
        i++; 
    }
    cout<<strOut<<"\n";
    return 0;
}