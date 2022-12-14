#include<stdio.h>

int main()
{
    int n,s,count=0;
    printf("Enter the number :\n");
    scanf("%d",&n);
    printf("Enter the digit to search in number :\n");
    scanf("%d",&s);
    while(n>0)
    {
        if(s==n%10)
        count++;
        n/=10;
    }
    if(count>0)
    printf("%d is present %d times in number.",s,count);
    else
    printf("%d is not present in number",s);

    return 0;
}