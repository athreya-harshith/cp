#include<iostream>
using namespace std;
class check
{
	
	public :static int z;
			void display()
			{
				//z=40;
				cout<<"Display Function "<<z<<endl;
			}
		check()
		{
			cout<<"Z contents are "<<z<<endl;
		}
};
int check::z=50;
int main()
{
	check a;
	a.z=20;//We can modify here iff the static member is declared under the public scope
	check::z=30;
	cout<<check::z<<endl;
	a.display();
	return 0;
}
