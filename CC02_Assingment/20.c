/* 20. Write a menu driven program to perform following operations on strings: 
        1. Show address of each character in string.
        2. Concatenate two strings without using strcat function.
        3. Concatenate two strings using strcat function.
        4. Compare two strings.
        5. Calculate length of the string (use pointers).
        6. Convert all lowercase characters to uppercase.
        7. Convert all uppercase characters to lowercase.
        8. Calculate number of vowels.
        9. Reverse the string.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void menu();
void second(char *b);
void address(char *a);
void concat(char *a,char *b);
void concat_func(char *a,char *b);
void cmp(char *a,char *b);
void len(char *a);
void upper(char *a);
void lower(char *a);
void vowel(char *a);
void rev(char *a);

int main()
{
    char a[30],b[30];
    int s;

    printf("Enter first string :");
    // scanf("%s",a);
    gets(a);
    printf("Enter second string :");
    // scanf("%s",b);
    gets(b);

    choice :
    menu();
    scanf("%d",&s);
    switch(s)
    {
        case 1:
            address(a);
            goto choice;
        case 2:
            concat(a,b);
            goto choice;
        case 3:
            concat_func(a,b);
            goto choice;
        case 4:
            cmp(a,b);
            goto choice;
        case 5:
            len(a);
            goto choice;
        case 6:
            upper(a);
            goto choice;
        case 7:
            lower(a);
            goto choice;
        case 8:
            vowel(a);
            goto choice;
        case 9:
            rev(a);
            goto choice;
        case 10:
            printf("Exiting.....\nExited.");
            exit(0);
        default:
            printf("Enter valid option.\n");
            goto choice;
    }

    return 0;
}

void menu()
{
    printf("\nChoose any option from below :\n\
        1.  Show address of each character in string.\n\
        2.  Concatenate two strings without using strcat function.\n\
        3.  Concatenate two strings using strcat function.\n\
        4.  Compare two strings.\n\
        5.  Calculate length of the string.\n\
        6.  Convert all lowercase characters to uppercase.\n\
        7.  Convert all uppercase characters to lowercase.\n\
        8.  Calculate number of vowels.\n\
        9.  Reverse the string.\n\
        10. Exit.\n");
}

void address(char *a)
{
    printf("Address of each character in string :\n");
    for(int i=0;a[i]!='\0';i++)
    printf("%c - %d\n",a[i],&a[i]);    
}

void concat(char *a,char *b)
{
    int i=0,j=0;
    for(;a[j]!='\0';j++)
    {}
    for(;b[i]!='\0';i++,j++)
    {
        a[j]=b[i];
    }
    a[j]='\0';
    printf("%s\n",a);
}

void concat_func(char *a,char *b)
{
    strcat(a,b);
    printf("%s\n",a);
}

void cmp(char *a,char *b)
{
    int c;
    c=strcmp(a,b);
    if(c==0)
    printf("String is same.\n");
    else
    printf("String is not same.\n");
}

void len(char *a)
{
    int i=0;
    for(;*(a+i)!='\0';i++)
    {}
    printf("length of string is %d.\n",i);
}

void upper(char *a)
{
    for(int i=0;a[i]!='\0';i++)
    printf("%c",toupper(a[i]));
}

void lower(char *a)
{
    for(int i=0;a[i]!='\0';i++)
    printf("%c",tolower(a[i]));
}

void vowel(char *a)
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
    count++;
    printf("%d Vowels in entered string.",count);
}

void rev(char *a)
{
    int l,t;
    l=strlen(a);
    for(int i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=t;
    }
    printf("Reverse string is :\n%s",a);
}