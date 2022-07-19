#include<iostream>
using namespace std;
typedef unsigned int UI;
void accept(UI &p,UI &q)
{
  cout<<"Enter values of a and b:\n";
  cin>>p>>q;
  cout<<"Address of p and q are:\n"<<&p<<"\t"<<&q<<endl;
}
void display(const UI &p,const UI &q,const UI &r)
{
  cout<<"Addition of 2 numbers is :\n"<<r<<endl;
}
void add(const UI &p,const UI &q,UI &r)
{
  r=p+q;
}
int main()
{
  UI a,b,c;
  cout<<&a<<"\t"<<&b<<"\n";
  accept(a,b);
  add(a,b,c);
  display(a,b,c);
}gedit
