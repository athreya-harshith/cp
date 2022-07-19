
// using namespace std;
// int main()
// {
//     int t,sum=0;
//     cin>>t;
//     int e;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         multiset<int> a;
//         for(int i=0;i<n;i++)
//         {
//             cin>>e;
//             a.insert(e);
//             e=0;
//         }
//         multiset<int> ::iterator it;
//         it=prev(a.begin());
//         a.erase(it);
//         for(auto it=a.begin()+1;it!=(a.end());it++)
//         {
//             cout<<*it<<" ";
//             sum+=*it;
//         }
//         //sum=sum-;
//         //e=0;
//         cout<<sum<<endl;
//     }
//     return 0;
// }
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t,m;
    long long int sum=0;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        sum=sum-(*min_element(a,a+n));
        cout<<sum<<endl;
        sum=0;
    }
}