#include <stdio.h>

int main()
{
    int n,t=1,s=0,x;
    printf("Enter the value of n :\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        t=t+i;
        printf(" %d +",t);
        s=s+t;
    }
    printf("\b= %d",s);
    printf("\n");

    t=1,s=0;
    for(int i=1;i<=n;i++)
    {
        printf(" %d +",t);
        s=s+t;
        t=t*10+1;
    }
    printf("\b= %d",s);
    printf("\n");

    t=1,s=0;
    printf("Enter the value of x for series x^1 + x^2 + x^3 + x^4.....%d terms.\n",n);
    scanf("%d",&x);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            t=t*x;
        }
        s=s+t;
        t=1;        
    }
    printf("value of x for series %d^1 + %d^2 + %d^3 + %d^4.....%d terms is ",x,x,x,x,n);
    printf("%d",s);
    printf("\n");

    t=1,s=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            t=t*x;
        }
        if(i%3!=0)
            s=s+t;
        else
            s=s-t;
        t=1;        
    }
    printf("value of x for series %d^1 + %d^2 - %d^3 + %d^4.....%d terms is ",x,x,x,x,n);
    printf("%d",s);
    printf("\n");

    float a,b;
    a=1,b=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            a=a*x;
        }
        if(i%2!=0)
            b=b+1/a;
        else
            b=b-1/a;
        a=1;        
    }
    printf("value of x for series 1/%d^1 - 1/%d^2 + 1/%d^3 - 1/%d^4.....%d terms is ",x,x,x,x,n);
    printf("%f",b);
    printf("\n");

    
    return 0;
}