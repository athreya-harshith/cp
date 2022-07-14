#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> a(26,0);
        string s;
        cin>>n;
        cin>>s;
        long cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(a[s[i]-'A']==0)
            {
                cnt+=2;
                a[s[i]-'A']=1;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}