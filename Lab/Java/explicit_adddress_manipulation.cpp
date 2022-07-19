#include<iostream>
using namespace std;
class cmp
{
	int r,i;
	public : cmp(int a,int b)
			{
				r=a;
				i=b;
			}
			void display()
			{
				cout<<r<<" "<<i<<endl;
			}
};
int main()
{
	cmp a(10,20);
	int *q=(int *)&a;
	a.display();
	(*q)=200;//modifies the contents of r in the instance a 
	a.display();
	q=q+1;
	(*q)=900;//modifies the contents of i in th instance a
	a.display();
	return 0;
}
/* Since this brings the canges to private members with address manipulation its considered as a threat to data security*/
