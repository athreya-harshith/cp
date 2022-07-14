#include<iostream>
#include<stdlib.h>
using namespace std;
int add(int ,int);
int main()
{
    int a1,b;
    cin>>a1>>b;
    int result;
    int (*a)(int,int);
    a=add;
    result=add(a1,b);
    cout<<"Reslut using normal Function call "<<result<<endl;
    result=0;
    result=(*a)(a1,b);
    cout<<"Reslut using normal Function Pointer call with Indirection "<<result<<endl;
    result=0;
    result=(a)(a1,b);
    cout<<"Reslut using normal Function Pointer call Without Indirection "<<result<<endl;
    return 0;
}
int add(int x,int y)
{
    return x+y;
}  