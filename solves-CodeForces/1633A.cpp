#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n; 
        if(n%7==0) cout<<n<<"\n";
        else{
            int tmp = n/10; 
            tmp = tmp*10;
            for(int i = tmp; i<=tmp+9; i++){
                if(i%7==0){
                    cout<<i<<"\n"; 
                    break; 
                }
            }
        }
    }
    return 0;
}
