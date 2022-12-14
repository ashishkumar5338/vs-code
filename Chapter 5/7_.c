#include<stdio.h>

int main()
{
    int x,y,t=1;
    printf("Enter the value of x :\n");
    scanf("%d",&x);
    printf("Enter the value of y :\n");
    scanf("%d",&y);
    for(int i=1;i<=y;i++)
    {
        t=t*x;
    }
    printf("%d",t);


    return 0;
}