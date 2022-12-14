#include<stdio.h>

int main()
{
    int n,t;
    printf("Enter any number :\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        t=i*i*i;
        if(t%3==0)
        printf("%d ",t);
    }

    return 0;
}