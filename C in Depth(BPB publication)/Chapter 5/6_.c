#include<stdio.h>

int main()
{
    int n,sum=0,mul=1,t;
    printf("Enter any Six digit number");
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        if(t%2==0)
        sum=sum+t;
        else
        mul=mul*t;
        n=n/10;
    }
    printf("Sum is %d and Multiplication is %d.",sum,mul);
    return 0;
}