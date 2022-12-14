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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }

    return 0;
}