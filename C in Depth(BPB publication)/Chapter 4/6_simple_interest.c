#include<stdio.h>
int main()
{
    int t;
    float p,r,si;
    printf("Enter principal value :\n");
    scanf("%f",&p);
    printf("Enter the rate of Interest :\n");
    scanf("%f",&r);
    printf("Enter the number of Years :\n");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("Simple Interest is :%.2f\n",si);

    return 0;
}