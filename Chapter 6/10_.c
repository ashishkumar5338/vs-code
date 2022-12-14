#include<stdio.h>
#include<stdlib.h>

void word(int n);

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    word(n);

    return 0;
}

void word(int n)
{
    if(n>0)
        word(n/10);
    if(n!=0)
    switch (n%10)
        {
        case 1:
            printf("One ");
            break;
        
        case 2:
            printf("Two ");
            break;
        
        case 3:
            printf("Three ");
            break;
        
        case 4:
            printf("Four ");
            break;
        
        case 5:
            printf("Five ");
            break;
        
        case 6:
            printf("Six ");
            break;
        
        case 7:
            printf("Seven ");
            break;
        
        case 8:
            printf("Eight ");
            break;
        
        case 9:
            printf("Nine ");
            break;

        case 0:
            printf("Zero ");
            break;
        
        default:
            break;
        }
}