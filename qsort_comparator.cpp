#include<iostream>
#include<cstdlib>
using namespace std;
int comparator(const void *a,const void *b)
{
    int x=*((int *)a);
    int y=*((int *)b);
    //return y-x;
    if(x>y)
        return -1;
    else if(y>x)
        return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    qsort(a,n,sizeof(int),comparator);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}