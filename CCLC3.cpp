#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,cnt=0;
        cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>a;
           if(a%2==1)
           {
             cnt++;
           }
       }
       if(cnt%2==0)
       {
           cout<<cnt/2<<"\n";
       }
       else
       {
           cnt--;
           cout<<cnt/2<<"\n";
       }
    
    }
    return 0;
}