// Convert all uppercase characters to lowercase.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[20];
    printf("Enter the string :");
    // scanf("%s",str);
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    printf("%c",tolower(str[i]));

    return 0;
}