#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    float t1,t2,r1,r2,x,y;
    while(t--)
    {
        cin>>t1>>t2>>r1>>r2;
        x=(t1*t1*r2*r2*r2);
        y=(t2*t2*r1*r1*r1);
        if(x==y)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}