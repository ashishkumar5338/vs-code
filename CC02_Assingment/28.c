// Calculate number of vowels.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[20];
    int count=0;
    printf("Enter the string :");
    // scanf("%s",str);
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    count++;
    printf("%d Vowels in entered string.",count);

    return 0;
}