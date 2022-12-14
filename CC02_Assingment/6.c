//Wap to compute th factors of a given number.
#include<stdio.h>

int main()
{
    int num,i;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("All factors of %d are:",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d",i);
            if(i<num)
                printf(",");
        
        }
    }

    return 0;
}