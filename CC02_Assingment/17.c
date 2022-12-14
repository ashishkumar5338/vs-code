//Write a program in which a function is passed address of two variables and then alter its contents.
#include<stdio.h>

void alter(int *x,int *y);

int main()
{
    int a,b;
    printf("Enter two number for altering :\n");
    scanf("%d%d",&a,&b);
    alter(&a,&b);
    printf("After altering :\n%d %d",a,b);
    return 0;
}

void alter(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}