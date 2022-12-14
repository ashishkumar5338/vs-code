//WAP to compute the sum of the first n terms of the following series S = 1 + 1/2 + 1/3 + 1/4 +......
#include<stdio.h>

int main()
{
    int n;
    float s=0;
    printf("Enter the n terms to calculate series :\n");
    scanf("%d", &n);
    for(float i=1;i<=n;i++)
    {
        s=s+1/i;
    }
    printf("The sum of the first %d terms of the following series S = 1 + 1/2 + 1/3 + 1/4 +...... is %f",n,s);

    return 0;
}