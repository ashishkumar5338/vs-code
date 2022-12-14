// Convert all lowercase characters to uppercase.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[20];
    printf("Enter the string :");
    // scanf("%s",str);
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    printf("%c",toupper(str[i]));

    return 0;
}