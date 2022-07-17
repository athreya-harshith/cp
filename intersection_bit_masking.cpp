/*  https://codeforces.com/blog/entry/73558 */


        // intersection  a&b
        //union a|b



#include<bits/stdc++.h>
using namespace std;
void print_binary(int n)
{
    for(int i=31;i>=0;i--)
        cout<<((n>>i) & 1);
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    unsigned int a[n];
    for(int i=0;i<n;i++)
    {
        int mask=0;
        int x;
        cin>>x;
        int t;
        for(int j=0;j<x;j++)
        {
            cin>>t;
            mask=(mask | (1<<t));
        }
        a[i]=mask;
    }
    int p1,p2;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        print_binary(a[i]);
    }    
    int max=0;
    int cnt;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            unsigned int inter=(a[i] & a[j]);
            cnt=__builtin_popcount(inter);
            if(cnt>max)
            {
                max=cnt;
                p1=i;
                p2=j;
            }
        }
    }
    cout<<max<<endl;
    cout<<p1<<" "<<p2<<endl;
}