// Concatenate two strings using strcat function.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[20],b[20];
    printf("Enter the first string :");
    // scanf("%s",a);
    gets(a);
    printf("Enter the second string :");
    // scanf("%s",b);
    gets(b);
    strcat(a,b);
    printf("%s",a);

    return 0;
}