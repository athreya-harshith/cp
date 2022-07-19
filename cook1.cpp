#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        if((a+b)%2==0)
          cout<<"Bob"<<endl;
        else
          cout<<"Alice"<<endl;
    }
    return 0;
}