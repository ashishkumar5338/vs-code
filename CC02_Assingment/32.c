//WAP to calculate Factorial of a number 
// (i)  using recursion 
// (ii) using iteration
#include<stdio.h>

int recurtion(int n);
int iteration(int n);

int main()
{
    int n;
    printf("\nEnter the number to find factorial :");
    scanf("%d",&n);
    printf("\nFactorial of %d using recurtion is %d.",n,recurtion(n));
    printf("\nFactorial of %d using iteration is %d.",n,iteration(n));

    return 0;
} 
int recurtion(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*recurtion(n-1);
}
int iteration(int n)
{
    int f=1;
    if(n==0)
        return 1;
    else
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
    return f;
}