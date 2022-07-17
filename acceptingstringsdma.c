#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *p=0;
    p=(char*)malloc(40);
    scanf("%[^\n]s",p);
    p=(char*)realloc(p,strlen(p)+1);
    printf("%s",p);
    return 0;
}