//Wap to reverse a number.
#include<stdio.h>

int main()
{
    int n,i,t,rev=0;
    printf("Enter the number for reversing\n");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        t=i%10;
        rev=rev*10+t;
        i=i/10;
    }
    printf("Reverse of this number %d is %d",n,rev);

    return 0;
}