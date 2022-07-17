#include<stdio.h>
#include<stdlib.h>
int **accept(int *n,int**p)
{
    printf("Enter The Size of Array\n");
    scanf("%d",n);
    *p=(int *)malloc(sizeof(int)*(*n));
    return *p;
}
void display(int n,int *p)
{
    
}
int main()
{
    int *p=0;
    int n;
    p=accept(&n,&p);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",p[i]);
    }
    free(p);
    return 0;
}