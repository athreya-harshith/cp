#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int ps[n],in[n];
        long int sum=0;
        long int res=INT_MAX;
        for(long int i=0;i<n;i++)
        {
            cin>>in[i];
            sum+=in[i];
            ps[i]=sum;
        }
        for(long int i=0;i<n;i++)
        {
            res=min(max(ps[i],sum-ps[i]),res);
        }
        cout<<res<<endl;
    }
    return 0;
}