#include<iostream>
using namespace std;
void accept(int &,int &);
void add(const int &,const int &,int &);
void display(const int &,const int &,const int &);
int main()
{
    int a,b,c;
    int x=10;
    int &x1=x;
    //int &r;
    //r=x;
    float f[5]={1.1,2.2334,4.55};
    float &f1=f[2];
    cout<<"Contents of x\t"<<x<<"\tAdddress of x"<<&x<<endl;
    cout<<"Contents of x1\t"<<x1<<"\tAddress of x1"<<&x1<<endl;
    accept(a,b);
    add(a,b,c);
    display(a,b,c);
    return 0;
}
void accept(int &p,int &q)
{
    cin>>p>>q;
    cout<<"Address of p and address of q\t"<<&p<<" "<<&q<<endl;
}
void add(const int &p,const int &q,int &r)
{
    r=p+q;
}
void display(const int &p,const int &q,const int &r)
{
    cout<<p<<" + "<<q<<" = "<<r<<endl;
   // p++;
}