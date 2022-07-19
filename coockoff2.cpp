#include "bits/stdc++.h"
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x1,x2;
        cin>>x1>>x2;
        if(x1==x2 || x1>x2)
            cout<<"YES"<<endl;
        else if(x1<x2)
            cout<<"NO"<<endl;
    }
    return 0;
}