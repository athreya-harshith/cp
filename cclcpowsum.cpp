#include<bits/stdc++.h>
using namespace std;
bool ispow2(long long int a)
{
    if(a==0)
        return false;
    return (ceil(log2(a)==floor(log2(a))));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[n];
        long long int sum=0;
        long long int minele;
        int pos;
        int sumpow;
        long long int diff;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(ispow2(sum))
        {
            cout<<"0"<<endl;
        }
        else
        {
            minele=*(min_element(arr,arr+n));
            pos=min_element(arr,arr+n)-arr;
            sumpow=ceil(log2(sum));
            diff=pow(2,sumpow)-sum;
            cout<<"1"<<endl;
            cout<<"1 "<<(diff+minele)/minele<<endl;
            cout<<pos+1<<endl;
        }
    }
    return 0;
}