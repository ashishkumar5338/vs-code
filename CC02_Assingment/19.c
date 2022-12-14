//Write a program to find sum of n elements entered by the user. To write this program, 
// allocate memory dynamically using malloc() / calloc() functions or new operator.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,sum=0;
    printf("Enter the total count of element :\n");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if(arr!=NULL)
    {
        printf("Now enter %d element for sum.\n",n);
        for(int i=0;i<n;i++)
        {
            printf("%d element :",i+1);
            scanf("%d",(arr+i));
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",*(arr+i));
            if(i<n-1)
            printf("+ ");    
        }
        for(int i=0;i<n;i++)
        {
            sum=sum+*(arr+i);
        }
        printf("= %d",sum);
        
    }

    return 0;
}