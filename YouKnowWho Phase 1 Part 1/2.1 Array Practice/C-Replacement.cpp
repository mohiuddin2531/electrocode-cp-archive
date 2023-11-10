#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n; 
    int arr[n]; 
    forn(i, n){
        int x; 
        cin>>x;
        if(x>0)arr[i]=1;
        else if (x<0)arr[i]=2;
        else arr[i]=0;
    }
    forn(i, n){
        cout<<arr[i];
        if(i!=n-1) cout<<" ";
    }
    cout<<endl; 
    return 0;
}