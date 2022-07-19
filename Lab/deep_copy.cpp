#include<iostream>
using namespace std;

class complex
{
  int *r,*i;
  public:
    complex(const complex &);
    complex(int p,int q)
    {
      r=new int(p);
      r=new int(q);
    }
    void display()
    {
      cout<<r<<endl;
      cout<<i<<endl;
    }
};

complex :: complex(const complex &p)
{
  r=new int (*(p.r));
  i=new int (*(p.i));
}

int main()
{
  complex c1(10,20);
  complex c2=c1;
  c1.display();
  c2.display();
}


