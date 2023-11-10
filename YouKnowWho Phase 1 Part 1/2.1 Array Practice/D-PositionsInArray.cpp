#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n; 
    forn(i, n){
        int x; cin>>x; 
        if(x<=10){
            cout<<"A["<<i<<"] = "<<x<<endl; 
        }
    }
    return 0;
}