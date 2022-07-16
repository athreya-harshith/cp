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
    cout<<"Eneter the i value to set the ith bit"<<endl;
    int i;
    cin>>i;
    cout<<"After Setting the i th bit"<<endl;
    print_binary((n | (1<<i)));
    cout<<"Enter the i value to unset the ith bit"<<endl;
    cin>>i;
    print_binary((n & ~(1<<i)));
    cout<<"enter ther  i value to toggle the ith bit"<<endl;
    cin>>i;
    print_binary((n ^ (1<<i)));
    cout<<"The Number of set bits in given number is "<<endl;
    int cnt=0;
    for(int i=0;i<32;i++)
        if((n>>i)&1 == 1)
            cnt++;
    cout<<cnt<<endl;
    cout<<__builtin_popcount(n)<<endl;
    cout<<__builtin_popcountll(1ll<<32)<<endl;
    return 0;
}