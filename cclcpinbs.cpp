#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t,c=0,n,cnt=0,p=-1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.length();
        if(n==1)
        {
            cout<<"No"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt++;
                p=i+1;
            }
        }
        if(cnt==0|| (cnt==1&&p==n))
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
   
    return 0;
}