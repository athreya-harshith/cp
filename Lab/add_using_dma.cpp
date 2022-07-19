#include<iostream>
using namespace std;
void accept(int *,int*);
void add(int&,int&,int*);
void display(const int &,const int &,const int &);
int * acquire();
int main()
{
  int *a,*b,*c;
  a=acquire();
  b=acquire();
  c=acquire();
  accept(a,b);
  add(*a,*b,c);
  display(*a,*b,*c);
  delete a;
  delete b;
  delete c;
}
int *acquire()
{
  int* t;
  t= new int;
  if(t!=NULL)
   return t;
  exit(1);
}
void accept(int *p,int *q)
{
  cout<<"Enter the values for a and b:\n";
  cin>>*p>>*q;
}
void add(int &p,int &q,int *r)
{
  *r=p+q;
}
void display(const int &p,const int &q,const int &r)
{
  cout<<p<<"+"<<q<<"="<<r<<"\n";
}

