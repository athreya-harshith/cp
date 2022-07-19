#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[n];
        int i,a,cnt,j=0;
        i=1;
        while(j!=n)
        {
            cnt=0;
            a=i;
            while(a)
            {
                a=a&(a-1);
                cnt++;
            }
            if(cnt%2==0)
            {
                arr[j]=i;
                j++;
            }
            i++;
        }
        for(int i=0;i<j;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}