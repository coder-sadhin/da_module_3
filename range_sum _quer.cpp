#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q;cin>>n>>q;
    vector<long long> lst(n);
    for (int i = 0; i < n; i++)
    {
        cin>>lst[i];
    }
    vector<long long> prefix(n);
    prefix[0]=lst[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = lst[i] + prefix[i-1];
    }
    
    while (q--)
    {
       long long l,r;
        cin>>l>>r;
        l--;
        r--;
        long long sum;
        if(l==0) sum=prefix[r];
        else sum=prefix[r]-prefix[l-1];
        cout<<sum<<endl;
    }
    return 0;
}