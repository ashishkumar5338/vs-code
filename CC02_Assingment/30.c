//Given two ordered arrays of integers, write a program to merge the two-arrays to get an ordered array.
#include<stdio.h>

int main()
{
    int a[100],b[100],c[100];
    int s1,s2,i,j;
    printf("Enter the size of first array :\n");
    scanf("%d",&s1);
    printf("Enter the element of first array :\n");
    for(i=0;i<s1;i++)
        scanf("%d",&a[i]);
    printf("Enter the size of second array :\n");
    scanf("%d",&s2);
    printf("Enter the element of second array :\n");
    for(i=0;i<s2;i++)
        scanf("%d",&b[i]);
    //merging array1 in new.
    for(i=0;i<s1;i++)
        c[i]=a[i];
    //merging array2 in new.    
    for(j=i,i=0;i<s2;i++,j++)
        c[j]=b[i];
    printf("Element in array after merging :\n");
    for(i=0;i<s1+s2;i++)
        printf("%d",c[i]);
    
    return 0;
}