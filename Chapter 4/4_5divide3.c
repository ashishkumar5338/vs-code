#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    printf("Enter five number :\n");
    scanf("%d%d%d%d%d",&i,&j,&k,&l,&m);
    printf("Remainder of %d after dividing by 3 is %d\n",i,i%3);
    printf("Remainder of %d after dividing by 3 is %d\n",j,j%3);
    printf("Remainder of %d after dividing by 3 is %d\n",k,k%3);
    printf("Remainder of %d after dividing by 3 is %d\n",l,l%3);
    printf("Remainder of %d after dividing by 3 is %d\n",m,m%3);

    return 0;
}