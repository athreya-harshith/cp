#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x=0;
    while(x++ < 1)
    {
        int d;
        cin>>d;
        if(d % 2)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            cout<<"0"<<" "<<(d/2)<<endl;
            cout<<(d/2)<<" "<<"0"<<endl;
            cout<<"0"<<" "<<-(d/2)<<endl;
            cout<<-(d/2)<<" "<<"0"<<endl;
        }
    }
    return 0;
}