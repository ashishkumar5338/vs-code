#include<stdio.h>

int main()
{
    int n,arr[100],t;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }

    return 0;
}