#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;cin>>n>>q;
    int lst[n];
    for (int i = 0; i < n; i++)
    {
        cin>>lst[i];
    }
    sort(lst,lst+n);
    while (q--)
    {
        int t;cin>>t;
        bool flags=false;
        int l=0,r=n-1;

        while(l<=r){
            int mid=(r+l)/2;
            if(lst[mid]==t)
            {
                flags=true;
                break;
            }
            if(lst[mid]<t){l=mid+1;}
            else r=mid-1;
        }

        cout << (flags ? "found" : "not found") << endl;
    }
    



    return 0;
}