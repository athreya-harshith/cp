#include<iostream>
using namespace std;
class inventory
{
  char pname[20];
  int onhand;
  float price;
  public:
    void accept()
    {
      cout<<"Enter the value for pname,onhand and price"<<endl;
      cin>>pname>>onhand>>price;
    }
    void display()
    {
      cout<<pname<<"\t"<<onhand<<"\t"<<price<<endl;
    }
};
int main()
{
  inventory *p=NULL;
  //p->accept();
  p=new inventory;
  p->accept();
  p->display();
  inventory a[5];
  int i;
  for(i=0;i<3;i++)
    a[i].accept();
  for(i=0;i<3;i++)
    a[i].display();
  inventory &ref=a[3];
  inventory &r=*p;
  ref.accept();
  a[3].display();
  r.accept();
  (*p).display();
  inventory *q=NULL;
  q=new inventory[5];
  for(i=0;i<2;i++)
   q[i].accept();
  for(i=0;i<2;i++)
   (q+i)->display();
  delete p;
  delete []q;
}
