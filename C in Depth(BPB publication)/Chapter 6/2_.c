#include<stdio.h>

int digit( int n);
int pers(int *n);

int main()
{
    int num,n,count=0;
    printf("Enter any integer:\n");
    scanf("%d",&num);
    n=num;
    while (digit(n)>1)
    {
        printf(" %d -->",pers(&n));
        count++;
    }
    printf("\b\b\b Persistence of %d is %d.",num,count);


    return 0;
}

int digit( int n)
{
    int count=0;
    while(n>0)
    {
        n/=10;
        count++;
    }
    return count;
}

int pers(int *n)
{
    int t,mul=1;
    while(*n>0)
    {
        t=(*n)%10;
        mul=mul*t;
        (*n)/=10;
    }
    *n=mul;
    return mul;
}