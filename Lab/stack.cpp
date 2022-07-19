#include<iostream>
using namespace std;
class stack
{
	int top,a[10];
	#define size 5
	public :
				stack():top(-1){}
				void push();
				void pop();
				void display();
};

void stack :: push()
{
	if(top==size-1)
	{
		cout<<"Stack is full"<<endl;
		return;
	}
	cout<<"Enter the Value"<<endl;
	cin>>a[++top];
}
void stack :: pop()
{
	if(top==-1)
	{
		cout<<"Empty Stack"<<endl;
		return;
	}
	cout<<"The deleted item is \n";
	cout<<a[top--]<<endl;
}
