// Reverse the string.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i,l,t;
    printf("Enter the string :");
    // scanf("%s",str);
    gets(str);
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        t=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=t;
    }
    printf("Reverse string is :\n%s",str);


    return 0;
}