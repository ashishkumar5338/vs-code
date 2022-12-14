#include<stdio.h>

int sumd(int n);

int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);
    printf("Sum of digits of %d is %d",num,sumd(num));

    return 0;
}

int sumd(int n)
{
    if(n==0)
    return 0;
    else
    return n%10 + sumd(n/10);
}