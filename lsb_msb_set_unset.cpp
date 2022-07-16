#include<bits/stdc++.h>
using namespace std;
void print_binary(int n)
{
    for(int i=9;i>=0;i--)
        cout<<((n>>i)&1);
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    print_binary(n);
    int i;
    cin>>i;
    print_binary((n & ~((1<<(i+1))-1)));
    cin>>i;
    print_binary((n & ((1<<(i+1))-1)));
    return 0;
}