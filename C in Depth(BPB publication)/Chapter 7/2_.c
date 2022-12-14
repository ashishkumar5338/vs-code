#include<stdio.h>

int main()
{
    int n,arr[100],sum=0,mul=1;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sum=sum+arr[i];
        if(arr[i]%2!=0)
        mul=mul*arr[i];
    }
    printf("Addition of all even number is %d and Multiplicaion of all odd number is %d.",sum,mul);

    return 0;
}