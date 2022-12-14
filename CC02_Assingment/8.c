//WAP to print the sum and product of digits of an integer.
#include<stdio.h>

int main()
{
    int num,t,sum=0,product=1,n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    num=n;
    while(num>0)
    {
        t=num%10;
        sum=sum+t;
        product=product*t;
        num=num/10;
    }
    printf("Sum of digit of integer %d is %d\n", n,sum);
    printf("Product of digit of integer %d is %d\n", n,product);

    return 0;
}