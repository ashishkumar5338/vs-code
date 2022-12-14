#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two number :\n");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("First number is greater and The sum is %d",a+b);
    }
    else
    {
        printf("Second number is greater and The differece is %d",b-a);
    }
    return 0;
}