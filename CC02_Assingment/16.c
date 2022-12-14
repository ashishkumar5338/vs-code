//Write a program that swaps two numbers using pointers.
#include<stdio.h>

int main()
{
    int a,b,*ptr1,*ptr2,t;
    ptr1=&a;
    ptr2=&b;
    printf("Enter the number for swapping :\n");
    scanf("%d%d",&a,&b);
    t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;
    printf("After swapping : %d  %d",*ptr1,*ptr2);
    return 0;
}