#include<stdio.h>

int main()
{
    int n,arr[100],min,max;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    min=arr[0],max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    printf("Sum of highest-%d and lowest-%d number is %d",max,min,min+max);


    return 0;
}