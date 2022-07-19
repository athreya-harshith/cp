#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        double sum=x+y;
        double z=6-sum;
        if(sum<6)
        {
            double ans;
            ans=z/6;
            cout<< fixed<<setprecision(10)<<ans<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}