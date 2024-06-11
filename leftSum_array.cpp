#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> lst(n);
    for (int i = 0; i < n; i++)
    {
        cin>>lst[i];
    }
    vector<int> prefix(n,0);
    for (int i = 1; i < n; i++)
    {
        prefix[i] = lst[i-1] + prefix[i-1];
    }
    for(int val:prefix){
        cout<<val<<" ";
    }
    
    return 0;
}