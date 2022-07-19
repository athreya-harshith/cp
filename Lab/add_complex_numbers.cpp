#include<iostream>
using namespace std;
class complex
{
  int r,i;
  public:
     void accept();
     void display()const;
     complex add(const complex &)const;
};
void complex :: accept()
{
  cout<<"Enter the values for r and i:"<<endl;
  cin>>this->r>>this->i;
}
void complex :: display()const
{
  //r=100;
  cout<<"The complex number is:"<<endl;
  cout<<r<<"+"<<i<<"i"<<endl;
}
complex complex :: add(const complex &p)const
{
  complex t;
  t.r=r+p.r;
  t.i=this->i+p.i;
  return t;
}
int main()
{
  complex c1,c2,res;
  //sc1.accept();
  //c2=c1;
  c2.display();
  c2.accept();
  res=c1.add(c2);
  res.display();
}
