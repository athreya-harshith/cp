#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4==0)
            cout<<"Good\n";
        else    
            cout<<"Not Good\n";       
    }
    return 0;
}