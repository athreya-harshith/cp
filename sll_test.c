#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
typedef struct node nd;
void insf(nd **first)
{
	nd *t=(nd *)malloc(sizeof(nd));
	scanf("%d",&(t->data));
	t->link=*first;
	*first=t;
	//return t;
}
void display(nd *first)
{
	for(;first!=0;first=first->link)
		printf("%d ",first->data);
	printf("\n");
}
nd *delr(nd *first)
{
	if(first==0)
		return first;
	if(first->link==0)
	{
		printf("%d \n",first->data);
		free(first);
		first=0;
		return first;
	}
	nd *t1;
	nd *t;
	t1=first;
	for(;t1->link->link!=0;t1=t1->link);
	//printf("%d \n",t->link->data);
	t=t1->link;
	printf("%d \n",t->data);
	t1->link=0;
	free(t);
	return first;	
}
int main()
{
	nd *first=0;
	while(1)
	{
		printf("1.InsF\n2.DelR\n3.Display\nDefault: Exit\n");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insf(&first);
					break;
			case 2:first=delr(first);
					break;
			case 3:display(first);
					break;
			default:exit(0);
		}
	}
	return 0;
}