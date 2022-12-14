#include<stdio.h>

int mult(int a,int b);
int quo(int a,int b);
int rem(int a,int b);

int main()
{
    int a,b;
    printf("Enter two number for multiplication :\n");
    scanf("%d%d",&a,&b);
    printf("Product of %d and %d is %d.\n",a,b,mult(a,b));
    printf("Quotient of %d and %d is %d.\n",a,b,quo(a,b));
    printf("Remainder of %d and %d is %d.\n",a,b,rem(a,b));

    return 0;
}

int mult(int a,int b)
{
    int s=0;
    for(int i=1;i<=b;i++)
    {
        s=s+a;
    }
    return s;
}

int quo(int a,int b)
{
    int s=0;
    for(;a>=b;s++)
    {
        a=a-b;
    }
    return s;
}

int rem(int a,int b)
{
    int s=0;
    for(;a>=b;s++)
    {
        a=a-b;
    }
    return a;
}