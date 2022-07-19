#include<iostream>
using namespace std;

class complex
{
  public:
    complex();
    ~complex();
};

complex :: complex()
{
  cout<<"In constructor\n";
  cout<<sizeof(this)<<" "<<sizeof(*this)<<endl;
}

complex :: ~complex()
{
  cout<<this<<endl;
}

int main()
{
  complex c;
  cout<<&c<<endl;
  complex *p=NULL;
  p=new complex;
  complex a[3];
  delete p;
  cout<<p<<endl;
}

