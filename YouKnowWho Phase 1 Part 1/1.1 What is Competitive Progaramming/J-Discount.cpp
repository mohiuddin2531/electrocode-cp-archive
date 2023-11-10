#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b; cin>>a>>b; 
    double discount = (double)((a-b)*100)/a;
    cout<< discount;
    return 0;
}