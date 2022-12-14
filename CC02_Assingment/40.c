// Write a function that reverses the elements of an array in place. The function must accept  
// only one pointer value and return void.
#include<stdio.h>
#include<stdlib.h>

void rev(int arr[]);

int main()
{
    int *arr[1],l;
    printf("Enter the total number of element of array.\n");
    scanf("%d",&l);
    arr[l];
    arr=(int *)malloc(l*sizeof(int));
    printf("Enter all element of array :\n");
    for(int i=0;i<l;i++)
    scanf("%d",(arr+i));
    for(int i=0;i<l;i++)
    printf(" %d ",arr[i]);
int t;
    t=sizeof(arr);
    printf("\n%d",t);
    rev(arr);

    return 0;
}
void rev(int *arr)
{
    int t;
    t=sizeof(*arr)/sizeof(arr[0]);
    printf("\n%d",t);
}