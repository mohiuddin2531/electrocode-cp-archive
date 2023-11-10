#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c; cin>>a>>b>>c;
    int tmp = 1, result = -1;  
    for(int i = 1; tmp <=b; i++){
        tmp = i*c; 
        if(tmp>=a && tmp<=b){
            result = tmp;
            break; 
        }
    }
    cout<<result; 
    return 0;
}