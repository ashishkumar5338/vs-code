//WAP to Check Whether a Character is Vowel or Consonant.
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("Entered character is vowel.");
    else
    printf("Entered character is Consonant.");

    return 0;
}