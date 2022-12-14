#include<stdio.h>

int sumdiv(int n);

int main()
{
    int i,n;
    printf("Enter the range to print perfect number:\n");
    scanf("%d %d",&i,&n);
    printf("All perfect number between %d to %d are:\n",i,n);
    for(;i<=n;i++)
    {
        if(i==sumdiv(i))
        printf(" %d",i);
    }



    return 0;
}

int sumdiv(int n)
{
    int s=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    return s;
}