#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> solve(vector<int> &s)
{
    vector<vector<int>> a;
    int n=s.size();
    for(int i=0;i<(1<<n);i++)
    {
        vector<int> subset;
        for(int j=0;j<n;j++)
        {
            if((i & (1<<j)))
                subset.push_back(s[j]);
        }
        // for(auto y:subset)
        //     cout<<y<<" ";
        // cout<<endl;
        a.push_back(subset);
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    vector<int> s;
    //vector<vector<int>> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push_back(x);
    }
    auto sol_a=solve(s);
    for(auto m:sol_a)
    {
        for(auto x:m)
            cout<<x<<" ";
        cout<<"\n";
    }
}