#include<iostream>
using namespace std;

class stack
{
  int top,a[10];
  #define size 5
  public:
  stack():top(-1){}
  void push();
  void pop();
  void display();
};

void stack :: push()
{
  if(this->top==size-1)
  {
    cout<<"Stack is Full\n";
    return;
  }
  cout<<"Enter the element:\n";
  cin>>this->a[++top];
}

void stack:: pop()
{
  if(top==-1)
  {
    cout<<"Stack is empty!\n";
    return;
  }
  cout<<"The deleted element is :"<<a[top--]<<endl;
}

void stack :: display()
{
  if(top==-1)
  {
     cout<<"The stack is empty!\n";
     return;
  }
  cout<<"The elements present in the stack are:\n";
  int n=top;
  while(n>=0)
    cout<<a[n--]<<endl;
}

int main()
{
  int key;
  stack s;
  while(1)
  {
     cout<<"Enter the choice:\n";
     cout<<"1.Push 2.Pop 3.Display 4.Exit\n";
     cin>>key;
     switch(key)
     {
         case 1: s.push(); 
                 break;
         case 2: s.pop();  
                 break;
         case 3: s.display(); 
                 break;
         case 4: exit(0);
         default: cout<<"Invalid choice !\n";
     }
  }
}

