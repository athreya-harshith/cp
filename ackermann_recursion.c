#include<stdio.h>
#include<stdio.h>
int a(int m,int n)
{
	if(m==0)
		return n+1;
	else if(m!=0 && n==0)
		return a(m-1,1);
	else if(m!=0 && n!=0)
		return a(m-1,a(m,n-1));
}
int main()
{
	printf("Enter M and N Values\n");
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",a(m,n));
	return 0;
}
