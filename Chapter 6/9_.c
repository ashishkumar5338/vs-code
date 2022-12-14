#include<stdio.h>

int rcomb(int n, int r);

int main()
{
    int n,r;
    printf("Enter the value of n and r:\n");
    scanf("%d%d",&n,&r);
    printf("Combination of n objects taken r at a time is %d.",rcomb(n,r));

    return 0;
}

int rcomb(int n, int r)
{
    if(r==0 || n==r)
    return 1;
    else
    return rcomb(n-1,r) + rcomb(n-1,r-1);
}