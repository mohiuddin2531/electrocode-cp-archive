#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+1; 
#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n; 
    int min = N, idx = -1; 
    forn(i, n){
        int x; cin>>x; 
        if(x<min){
            min = x; 
            idx = i+1; 
        }
    }
    cout<<min<<" "<<idx<<"\n";
    return 0;
}