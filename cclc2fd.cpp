#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool f=false;
        int j,sum=0;
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(j=0;j<n;j++)
        {
            sum+=a[j];
            if(sum>=x)
            {
                f=true;
                break;
            }
        }
        if(f)
        {
            cout<<j+1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}