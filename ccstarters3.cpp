#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x;
        cin>>x;
        int cnt=0;
        while(x%2==0)
        {
            cnt++;
            x/=2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}