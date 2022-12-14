//WAP to display Fibonacci series 
// (i)  using recursion 
// (ii) using iteration
#include<stdio.h>

void recursion(int n);
int fib(int n);
void iteration(int n);

int main()
{
    int n;
    printf("\nEnter the nth number for Fibonacci series :");
    scanf("%d",&n);
    printf("\nFibonacci series using recursion :");
    recursion(n);
    printf("\nFibonacci series using iteration :");
    iteration(n);
    return 0;
}
void recursion(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",fib(i));
        if(i<n-1)
            printf(",");
    }
}
int fib(int n)
{
    int r;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
    {
        r=fib(n-1)+fib(n-2);
    }
    return r;
}
void iteration(int n)
{
    int s=0,t=1,u;
    for(int i=0;i<n;i++)
    {
        printf("%d",s);
        u=s+t;
        s=t;
        t=u;
        if(i<n-1)
            printf(",");
    }
}