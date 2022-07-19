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
			 void display()
			 {
			 	cout<<s<<endl;
			 }
			 ~string1()
			 {
			 	cout<<"Destructor Invoked"<<endl;
				delete []s;
			 }
};
/*void string1::display()
{
	std::cout<<"Inside Display "<<endl;
	std::cout<<s<<endl;
}*/
/*string1::~string1()
{
	cout<<"Destructor Invoked"<<endl;
	delete[] s;
}*/
int main()
{
	string1 s;
	cout<<"Object S contains"<<endl;
	s.display();
	string1 s1("RNS");				
	cout<<"Object S1 contains"<<endl;
	s1.display();
	string1 s2(" CSE");
	cout<<"Object S2 contains"<<endl;
	s2.display();
	string1 s3(s1);
	cout<<"Object S3 contains"<<endl;
	s3.display();
	return 0;
}
