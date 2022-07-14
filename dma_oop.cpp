#include<iostream>
using namespace std;
int *allocate();
void accept(int &,int &);
void add(const int &,const int &,int &);
void display(const int &,const int &,const int &);
int main()
{
    int *p,*q,*r;
    p=allocate();
    q=allocate();
    r=allocate();
    accept(*p,*q);
    add(*p,*q,*r);
    display(*p,*q,*r);
    delete p;
    delete q;
    delete r;
    return 0;
}
int *allocate()
{
    int *c=new int;
    return c;
}
void accept(int &a,int &b)
{
    cin>>a>>b;
}
void add(const int &a,const int &b,int &c)
{
    c=a+b;
}
void display(const int &a,const int &b,const int &c)
{
    cout<<a<<" + "<<b<<" = "<<c<<endl;
}