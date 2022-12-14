//  Show address of each character in string.
#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter the string :");
    // scanf("%s",str);
    gets(str);
    printf("Address of each character in string :\n");
    for(int i=0;str[i]!='\0';i++)
    printf("%c - %u\n",str[i],&str[i]);

    return 0;
}