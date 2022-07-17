#include<stdio.h>
#include<stdlib.h>
int *accept(int *n)
{
    printf("Enter the Size of The array\n");
    scanf("%d",n);
    int *p=0;
    p=(int *)malloc(sizeof(int)*(*n));
    //intake((*n),p);
    return p;
}
void intake(int n,int *p)
{
    printf("Enter the Array Elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
}
void display(int n,int *p)
{
    printf("The Array Elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    int *p=0;
    p=accept(&n);
    intake(n,p);
    display(n,p);
    free(p);
    return 0;
}