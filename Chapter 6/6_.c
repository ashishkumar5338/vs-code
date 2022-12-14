#include<stdio.h>

int upper(char c);

int main()
{
    char c;
    printf("Enter any lower charater :\n");
    scanf("%c",&c);
    printf("Upper case is - %c",upper(c));

    return 0;
}

int upper(char c)
{
    if('a'<= c && c <='z')
    return c-32;
    else
    return c;
}