#include<iostream>
using namespace std;

class complex
{
  int r,i;
  public:
    complex();
    complex(int);
    complex(int,int);
    void display();
};

complex :: complex():r(0),i(0)
{
  cout<<"In Zero Parameterized constructor\n";
  cout<<"contents of 'this' in ZPC "<<this<<endl;
}

complex :: complex(int p):r(p),i(0)
{
  cout<<"In 1 Parameterized constructor\n";
  cout<<"Contents of 'this' in 1-PC "<<this<<endl;
}

complex :: complex(int p,int q): r(p),i(q)
{
  cout<<"In 2 Parameterized consturctor\n";
  cout<<"Contents of 'this' in 2-PC "<<this<<endl;
}

void complex :: display()
{
  cout<<r<<"+"<<i<<"i"<<endl;
}

int main()
{
  complex *p=NULL;
  p= new complex;
  cout<<p<<endl;
  delete p;
  p=new complex(10);
  cout<<p<<endl;
  delete p;
  p= new complex[3];
  for(int i=0;i<3;i++)
    cout<<&p[i]<<endl;
  complex q[3] = {complex(), complex(10),complex(10,20)};
  for(int i=0;i<3;i++)
  {
     cout<<&q[i]<<endl;
     q[i].display();
  }
}

