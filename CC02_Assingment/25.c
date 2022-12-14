// Calculate length of the string (use pointers).
#include<stdio.h>

int main()
{
    char *ptr,str[20];
    ptr=str;
    int i=0;
    printf("Enter the string :");
    // scanf("%s",str);
    gets(str);
    for(;*(ptr+i)!='\0';i++)
    {}
    printf("length of string is %d.",i);


    return 0;
}