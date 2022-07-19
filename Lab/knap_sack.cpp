#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> p;
    vector<int> w;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push_back(x);
    }
     for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        w.push_back(x);
    }
    vector<pair<float,int>> f;
     for(int i=0;i<n;i++)
    {
           float x=((float)p[i])/((float(w[i])));
           //cout<<x<<endl;
           f.push_back(make_pair(x,i));
    }
    stable_sort(f.rbegin(),f.rend());
      for(int i=0;i<n;i++)
    {
        cout<<f[i].first<<" "<<f[i].second<<endl;
    }
    int x=0;
    float sum=0.000;
    int i=0;
   /* while(1)
    {
        if(x==m)
        {
            break;
        }
        if(w[f[i].second]<=(m-x))
        {
            sum+=p[f[i].second];
            x+=w[f[i].second];
            i++;
        }
    }*/
    cout<<endl;
    cout<<endl;
    for(;i<n;i++)
    {
        //x+=w[f[i].second];
        if(w[f[i].second]<=(m-x))
        {
            sum+=(float)p[f[i].second];
            x+=w[f[i].second];
            cout<<sum<<" "<<x<<endl;
        }
        else
            break;
    }
    if(w[f[i].second]>(m-x))
    {
        float x1=((float)(m-x))/((float)w[f[i].second]);
        cout<<endl;
        cout<<endl;
        cout<<x1<<endl;
        sum+=x1*((float)p[f[i].second]);
    }
    cout<<endl;
    cout<<endl;
    cout<<sum<<endl;
    return 0;
}