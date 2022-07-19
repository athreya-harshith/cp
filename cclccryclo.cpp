#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long int s,s1;
        cin>>n;
        int a[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cin>>a[i][j];
        }
        s=a[0][1]+a[0][2]+a[1][2];
        s1=a[1][0]+a[2][0]+a[2][1];
        s=max(s,s1);
        if(a[0][0]==n && a[1][1]==n && a[2][2]==n)
            cout<<0<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}