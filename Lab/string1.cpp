#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	char *s;
	public :
			//zpc
			 string1():s(NULL){}
			 //one pc
			 string1(char *p)
			 {
			 	cout<<"One Parameterized costructor invoked"<<endl;
				s=new char[strlen(p)+1];
				strcpy(s,p);
			 }
			 //copy constructor
			 string1(const string1 &r)
			 {
				cout<<"Copy constructor called"<<endl;
				s=new char[strlen(r.s)+1];
				strcpy(s,r.s);
			 } 
			 ~string1();
			 void display();
			 string1 concat_1(const string1 &)const;
			 void operator=(const string1 &);
			 friend void accept(string1 &);
			 void concat_2(const string1 &,const string1&);
};
void string1 :: display()
{
   cout<<"Displaying the contents"<<endl;
   //cout<<this<<endl;
   if(s==NULL)
   {
		cout<<"the Member has nothing inside it(NULL)"<<endl;
		return;
	}
   //if (s!=NULL)
	cout<<s<<endl;
}
string1 :: ~string1()
{
	cout<<"Destructor Invoked"<<endl;
	delete []s;
}
string1 string1 :: concat_1(const string1 &r)const
{
	string1 t;
	t.s=new char[strlen(s)+strlen(r.s)+1];
	strcpy(t.s,s);
	strcpy(t.s+strlen(s),r.s);
	cout<<"The Address of t is \t"<<&t<<endl;
	return t;
}
void string1 :: operator=(const string1 &r)
{
	//t's address matches with the address of r
	//indicating that returning value from a calling function maintains a refernce for the returning variable and its sent to r
	//its same as referncing a variable twice
	cout<<"This pointer contents\t"<<this<<endl;
	cout<<"Address of r \t"<<&r<<endl;
	s=new char[strlen(r.s)+1];
	strcpy(s,r.s);
	cout<<"End of Operator\n";
}
void accept(string1 &r)
{
	cout<<"Friend Function Invoked\n";
	//cout<<this<<endl; ERROR invalid use of ‘this’ in non-member function
	char *p=new char[200];
	cin>>p;
	r.s=new char[strlen(p)+1];
	strcpy(r.s,p);
	delete []p;
}
void string1 :: concat_2(const string1 &q,const string1 &r)
{
	s = new char[strlen(q.s)+strlen(r.s)+1];
	strcpy(s,q.s);
	strcat(s,r.s);
}


int main()
{
	string1 s;// terminates if the data member contains null
	//s1.display();
	char a[]={"RNS "};
	string1 s1(a);
	//cout<<&s2<<endl;
	s1.display();
	string1 s2;
	accept(s2);
	s2.display();
	string1 s3=s1;
	//s3=s1; does shallow copy throws double free detected in tcache
	s3.display();
	string1 s4;
	cout<<"The address of s4 is\t"<<&s4<<endl;
	s4=s1.concat_1(s2);// destructor is invoked for formal parameters also
	/*it gets the value held by the oblect t which is local to the function 	concat_1 scope so it is automatically de-allocated during exectution when its again called by destructor, double free() is encountered*/
	//this is due to
	s4.display();
	string1 s5;
	s5.concat_2(s1,s2);
	s5.display();
	return 0;
}
