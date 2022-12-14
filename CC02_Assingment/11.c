//WAP to compute the sum of the first n terms of the following series S =1-2+3-4+5................
#include<stdio.h>

int main()
{
    int n,s=0;
    printf("Enter the n terms to calculate series :\n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        s=s+i;
        if(i%2==0)
        s=s-i;
    }
    printf("The sum of the first %d terms of the following series S =1-2+3-4+5.... is %d",n,s);

    return 0;
}