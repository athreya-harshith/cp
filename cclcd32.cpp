#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   
    while(t--)
    {
        long long int n,d,x;
        cin>>n>>d;
        long int i;
        x=1;
        for(i=1;i<=d&&x<n;i++)
        {
            if(i<11)
            {
                x*=2;
            }
            else
            {
                x*=3;
            }
        }
        if(x>n)
        {
            x=n;
        }
        cout<<x<<endl;
    }
    return 0;
}