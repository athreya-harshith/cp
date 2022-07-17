#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=0;
    int n=4;
    p=(int *)malloc(sizeof(int)*n);
    n=n-2;
    p=(int *)realloc(p,sizeof(int)*n);
    n=n+3;
    p=(int *)realloc(n,sizeof(int)*n);
    free(p);
    return 0;
}