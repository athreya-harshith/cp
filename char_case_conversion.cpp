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
    //int n;
    //cin>>n;
    for(char i='A';i<'F';i++)
    {
        cout<<i<<endl;
        print_binary(i);
        cout<<char(i | ' ')<<endl;
    }
    for(char i='a';i<'f';i++)
    {
        cout<<i<<endl;
        print_binary(i);
        cout<<char(i & '_')<<endl;
    }
    print_binary(1<<5);
    print_binary((~(1<<5)));
    cout<<char((~(1<<5)))<<endl;
    print_binary(int('_'));
    //print_binary(n);
    return 0;
}