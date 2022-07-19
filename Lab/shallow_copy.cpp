#include<iostream>
using namespace std;

class complex
{
  int *r,*i;
  public:
    void assign(int p,int q)
    {
       r=new int(p);
       i=new int(q);
    }
    void display()
    {
       cout<<r<<endl;
       cout<<i<<endl;
    }
};
 
int main()
{
  complex c1;
  c1.assign(10,20);
  complex c2=c1;
  c1.display();
  c2.display();
}

