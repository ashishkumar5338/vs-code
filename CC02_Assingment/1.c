//Wap to perform input/output of all basic data types.
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    int num;
    float f;
    printf("Enter a character : \n");
    scanf("%c",&ch);
    printf("Enter a integer number : \n");
    scanf("%d",&num);
    printf("Enter a float number : \n");
    scanf("%f",&f);
    printf("\nEntered character : %c",ch);
    printf("\nEntered integer number : %d",num);
    printf("\nEntered float number : %6.2f",f);
    return 0;
}