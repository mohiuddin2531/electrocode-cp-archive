#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n; 
    bool flag = true; 
    while(n--){
        int x; cin>>x; 
        if(x==1) flag = false; 
    }
    cout<<(flag?"EASY\n":"HARD\n");
    return 0;
}
