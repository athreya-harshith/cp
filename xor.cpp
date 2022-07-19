#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=1;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum^=j;
        }
        cout<<sum<<endl;
        sum=1;
    }
    int x;
    cout<<endl;
    cout<<endl;
    x=0;
    x=0^1;
    cout<<x<<endl;
    x=0;
    x=2^0;
    cout<<x<<endl;
    x=1;
    x=2^1;
    cout<<x<<endl;
    //00
    //01
    //10
    //11
}