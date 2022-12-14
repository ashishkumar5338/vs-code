#include<stdio.h>

int main()
{
    int n,t,rev=0;
    printf("Enter the number :\n");
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        rev=10*rev+t;
        n=n/10;
    }
    printf("Reverse number is %d",rev);

    return 0;
}