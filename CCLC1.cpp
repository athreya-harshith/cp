#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,a,b,k;
    cin>>t;
    while(t)
    {
      cin>>x>>y>>a>>b>>k;
      x+=(a*k);
      y+=(b*k);
      if(x<y)
      {
          cout<<"PETROL"<<endl;
      }
      else if(x>y)
      {
          cout<<"DIESEL"<<endl;
      }
      else if(x==y)
      {
          cout<<"SAME PRICE"<<endl;
      }
      t--;
    }
}