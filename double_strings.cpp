#include<bits/stdc++.h>
using namespace std;
void solve(string *a,int s)
{
    vector<bool> ans;
    for(int i=0;i<8;i++)
    {
        string a1=a[i];
        cout<<a1<<endl;
        for(int j=0;j<8;j++)
        {
            if(i!=s && j!=s)
            {
                cout<<j1<<endl;
                string j1=a[j];
                string c1=a1+j1;
                cout<<c1<<endl;
                string c2=j1+a1;
                cout<<c2<<endl;
                if(a[s]==c1 || a[s] == c2)
                {
                    ans.push_back(1);
                }
                ans.push_back(0);
            }
        }
    }
    for(auto it:ans)
        cout<<it<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[8];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>s[i];
        string ans;
        for(int i=0;i<8;i++)
            solve(s,i);
    }
}