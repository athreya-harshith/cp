#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> a;
    int n;
    int c=3;
    while(c--)
    {
        cin>>n;
        a.insert(n);
    }
    auto it=a.begin();
    advance(it,1);
    cout<<*it<<endl;
    return 0;
}