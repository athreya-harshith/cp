#include<stdio.h>
struct add
{
    int x,y;
};
struct add a1;
int main()
{
    scanf("%d%d",&a1.x,&a1.y);
    printf("The Sum is %d  ",a1.x+a1.y);
    return 0;
}
