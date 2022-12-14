// Compare two strings.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[20],b[20];
    int c;
    printf("Enter the first string :");
    scanf("%s",a);
    printf("Enter the second string :");
    scanf("%s",b);
    c=strcmp(a,b);
    if(c==0)
    printf("String is same.");
    else
    printf("String is not same.");

    return 0;
}