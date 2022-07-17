#include<stdio.h>
#include<stdlib.h>
int main()
{
    void *p=0;
    p=malloc(1);
    *((char *)p)='a';
    printf("%c",*((char *)p));
    int *q=0;
    q=(int *)malloc(4);
    int *r=0;
    r=(int *)malloc(4);
    scanf("%d%d",q,r);
    printf("%d  ",*((int *)q)+*((int *)r));
    return 0;
}