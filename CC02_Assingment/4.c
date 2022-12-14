//Wap to swap two numbers.
#include<stdio.h>

int main()
{
    int a,b,t;
    printf("Enter the number for Swapping:\na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("Swapped number is:\na=%d\nb=%d",a,b);

    return 0;
}