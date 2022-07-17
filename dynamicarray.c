#include<stdio.h>
#include<stdlib.h>
void accept(int *n,int *p)
{
    printf("Enter the Array Size\n");
    scanf("%d",n);
    printf("Enter the Array Elemnts\n");
    for(int i=0;i<(*n) ;i++)
    {
        scanf("%d",&p[i]);
    }
}
void display(int n, int *p)
{
    printf("The Array Elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}
int main()
{
    int *p=0;
    p=(int *)malloc(sizeof(int)*10);
    int n;
    accept(&n,p);
    display(n,p);
    return 0;
    free(p);
}