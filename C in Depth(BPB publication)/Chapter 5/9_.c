#include<stdio.h>

int main()
{
    int n,tmp,count=0,t=1,s=0;
    printf("Enter any number :\n");
    scanf("%d",&n);
    for(;n>t;)
    {
        tmp=t;
        t=t+s;
        s=tmp;
        if(n==t)
        {
            count++;
            break;
        }
    }
    if(count>0)
    printf("Number found in fibonacci series.");
    if(count==0)
    printf("It is not a fibonacci number.");

    return 0;
}