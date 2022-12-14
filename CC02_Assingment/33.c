//WAP to calculate GCD of two numbers 
// (i)  with recursion 
// (ii) without recursion.
#include<stdio.h>

int gcd_rec(int x,int y);
int gcd(int x,int y);

int main()
{
    int a,b;
    printf("Enter the two number to find GCD :\n");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        int t=a;
        a=b;
        b=t;
    }
    printf("GCD of %d and %d using recursion is %d.\n",a,b,gcd_rec(a,b));
    printf("GCD of %d and %d without recursion is %d.",a,b,gcd(a,b));    
    return 0;
}
int gcd_rec(int x,int y)
{
    int d;
    if(y==0)
    {
        return x;
    }
    else
    {
        d=y;
        y=x%y;
        x=d;
        gcd_rec(x,y);
    }
}
int gcd(int x,int y)
{
    int d;
    if(y==0)
        return x;
    for(int i=1;i<=y;i++)
        if(x%i==0 && y%i==0)
            d=i;
    return d;
}