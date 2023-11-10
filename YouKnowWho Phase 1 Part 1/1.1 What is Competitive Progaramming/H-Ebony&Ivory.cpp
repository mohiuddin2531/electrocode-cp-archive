#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c; cin>>a>>b>>c;
    for(int i = 0; i<=c; i+=a){
        for(int j = 0; j<=c; j+=b){
            if(i+j==c){
                cout<<"Yes";
                return 0; 
            }
        }
    }
    cout<<"No\n";
    return 0;
}