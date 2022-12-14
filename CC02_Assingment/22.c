// Concatenate two strings without using strcat function.
#include<stdio.h>

int main()
{
    char a[20],b[20];
    int i=0,j=0;
    printf("Enter first string :");
    // scanf("%s",a);
    gets(a);
    printf("Enter second string :");
    // scanf("%s",b);
    gets(b);
    for(;a[j]!='\0';j++)
    {}
    for(;b[i]!='\0';i++,j++)
    {
        a[j]=b[i];
    }
    a[j]='\0';
    printf("%s",a);

    return 0;
}