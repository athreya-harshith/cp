#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct inventory
{
 char pname[20];
 float price;
 int onhand;
};

typedef unsigned int UI;

inventory * memory_alloc(UI &);
void accept(const UI &,inventory *);
void display(const UI &, inventory *);

int compare(const void* a,const void * b)
{
  inventory x=*((inventory*)a);
  inventory y=*((inventory*)b);
  return strcmp(x.pname,y.pname);
}

void sort(const UI &n,inventory *a)
{
  for(int i=0;i<n;i++)
   for(int j=i+1;j<n;j++)
    if(strcmp(a[i].pname,a[j].pname)>0)
    {
      inventory x= a[j];
      a[j]=a[i];
      a[i]=x;
    }
}

int main()
{
  inventory *ar=NULL;
  UI n;
  ar=memory_alloc(n);
  accept(n,ar);
  display(n,ar);
  //sort(n,ar);
  qsort(ar,n,sizeof(inventory),compare);
  cout<<"The sorted list is:"<<endl;
  display(n,ar);
}

inventory * memory_alloc(UI &n)
{
  inventory *t;
  cout<<"Enter the value of n:\n";
  cin>>n;
  t=new inventory[n];
  if(t!=NULL)
    return t;
  exit(1);
}

void accept(const UI &n,inventory *ar)
{
  cout<<"Enter the data for "<<n<<" inventory values"<<endl;
  for(int i=0;i<n;i++)
   cin>>ar[i].pname>>ar[i].price>>ar[i].onhand;
}

void display(const UI &n, inventory *ar)
{
  cout<<"The "<<n<<" Inventory values are:\n";
  for(int i=0;i<n;i++)
   cout<<ar[i].pname<<" "<<ar[i].price<<" "<<ar[i].onhand<<endl;
}

