#include<stdio.h>

int main()
{
    int i,j;
    printf("Prime number between 1 to 99 are :\n");
    for(i=3;i<100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d ",i);
    }

    return 0;
}