#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=s.length();
        int f=0;
       // cout<<n<<endl;
        //cout<<s<<endl;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='1'&&(s[i+1]=='0'|| s[i+1]=='1'))
            {
                f=1;
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(f==0)
        {
            cout<<"No"<<endl;
        }
        f=0;
    }
    return 0;
}