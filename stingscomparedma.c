#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *accept(void)
{
    char *p=0;
    p=(char*)malloc(40);
    scanf(" %[^\n]s",p);
    p=(char*)realloc(p,strlen(p)+1);
    return p;
}
void stringcompare(char *p,char *q)
{
    if(strcmp(p,q)==0)
    {
        printf("The Strings are equal");
    }
    else
    {
         printf("The Strings are not equal");
    }  
}
int main()
{
    char *p=0,*q=0;
    p=accept();
    q=accept();
    stringcompare(p,q);
    fflush();
    return 0;
}