#include <bits/stdc++.h>
using namespace std;
 
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T; cin>>T; 
    for(int t = 1; t<=T; t++){
        int p, l; cin>>p>>l;
        vector<int>peaju; 
        int tmp = p-l; 
        for(int i = 1; (long long)i*i <= tmp; i++){
            if(tmp%i==0){
                if(i>l) peaju.push_back(i);
                if(tmp/i!=i && tmp/i>l) peaju.push_back(tmp/i); 
            }
        }
        sort(peaju.begin(), peaju.end()); 

        cout<<"Case "<<t<<": ";
        if(!peaju.empty()){
            for(auto x : peaju){
                cout<<x<<" "; 
            }
        }
        else{
            cout<<"impossible"; 
        }
        cout<<"\n"; 
    }
    return 0;
}

