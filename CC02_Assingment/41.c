// Write a program that will read 10 integers from user and store them in an array.  
//   Implement array using pointers. The program will print the array elements in ascending  
//   and descending order.
#include<stdio.h>

int main()
{
    int arr[10],t;
    printf("Enter all 10 element :\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&(*(arr+i)));
    }
    printf("Entered Array is :\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",*(arr+i));
    }
    for(int i=1;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(*(arr+j)>*(arr+i))
            {
                t=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=t;
            }
        }
    }
    printf("\nArray in ascending order :");
    for(int i=0;i<10;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\nArray in ascending order :");
    for(int i=0;i<10;i++)
    {
        printf("%d ",*(arr+9-i));
    }

    return 0;
}