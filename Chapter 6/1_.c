#include<stdio.h>

int cubesum(int x);

int main()
{
    int n;
    // printf("Enter the a number:\n");
    // scanf("%d",&n);
    for(int i=0;i<1000;i++)
    {
        // printf(".\n");
        if(i==cubesum(i))
            printf("%d is Armstrong number.\n",i);
    }

    return 0;
}

int cubesum(int x)
{
    int s=0,t;
    while(x>0)
    {
        t=x%10;
        s=s+t*t*t;
        x=x/10;
    }
    return s;
}