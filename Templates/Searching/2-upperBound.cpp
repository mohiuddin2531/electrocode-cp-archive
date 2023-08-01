#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> vec = { 4,3,2,-1 };
    int pos = upper_bound(vec.begin(), vec.end(), -1)-vec.begin(); 
    cout<<pos;
    return 0;
}