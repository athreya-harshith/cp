#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,a1,b1,c1;
        cin>>a>>b>>c>>a1>>b1>>c1;
        int s=0,s1=0;
        s=a+b+c;
        s1=a1+b1+c1;
        if(s>s1)
        {
            cout<<"DRAGON"<<endl;
        }
        else if(s1>s)
        {
            cout<<"SLOTH"<<endl;
        }
        else if(s==s1)
        {
            if(a>a1)
            {
                cout<<"DRAGON"<<endl;
            }
            else if(a==a1 && b>b1)
            {
                cout<<"DRAGON"<<endl;
            }
            else if(a==a1 && b==b1 && c==c1)
            {
                cout<<"TIE"<<endl;
            }
            else
            {
                cout<<"SLOTH"<<endl;
            }
        }
    }
}