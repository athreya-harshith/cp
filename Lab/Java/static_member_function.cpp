#include<iostream>
using namespace std;
class check
{
	static int z;
	public :static void access()
			{
				cout<<"Static Member function is Called"<<endl;
				z=45;
				cout<<z<<endl;
				//	cout<<this<<endl;//ERROR
				/*static_member_function.cpp:11:11: error: ‘this’ is unavailable for static member fu
nctions
*/
			}
};
int check::z=25;
int main()
{
	check a;
	//cout<<check::z<<endl; ERROR
	/*‘int check::z’ is private within this cont*/
	a.access();
	return 0;
}
