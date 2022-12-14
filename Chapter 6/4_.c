#include<stdio.h>

int main()
{
    int n;
    float s=0.5,t=1;
    printf("Enter the value of n to find sum of series:\n");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        t=i*i;
        s=s+1/t;
    }
    printf("%.2f",s);

    return 0;
}