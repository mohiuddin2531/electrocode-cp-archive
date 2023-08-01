#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(vector<int>vec, int x){
    int lo = 0, hi = vec.size() - 1; 
    while(lo<=hi){
        int mid = (lo+hi)/2; 
        if(vec[mid]==x) return mid; 
        else if(vec[mid]<x) lo = mid + 1; 
        else hi = mid - 1; 
    }
    return -1;
}

 
int main()
{
    vector<int> vec = { 2, 3, 4, 10, 40 };
    int x = 11;
    int result = binarySearch(vec, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}