/*WAP to print a triangle of stars as follows (take number of lines from user): 

1.      *      2.      1       3.        1          4.      1   5.  A       6.  A
       ***            1 1               2 3                12       AB          BA
      *****          1 2 1             4 5 6              123       ABC         CBA
     *******        1 3 3 1           7 8 9 10           1234       ABCD        DCBA
    *********      1 4 6 4 1       11 12 13 14 15       12345       ABCDE       EDCBA


*/

#include<stdio.h>

void tri1(int i);
void tri2(int i);
void tri3(int i);
void tri4(int i);
void tri5(int i);
void tri6(int i);

int main()
{
    int i,c;
    printf("Enter the triangle number from below you want to print :\n\
        |1.      *      2.      1       3.        1          4.      1   5.  A       6.  A    |\n\
        |       ***            1 1               2 3                12       AB          BA   |\n\
        |      *****          1 2 1             4 5 6              123       ABC         CBA  |\n\
        |     *******        1 3 3 1           7 8 9 10           1234       ABCD        DCBA |\n\
        |    *********      1 4 6 4 1       11 12 13 14 15       12345       ABCDE       EDCBA|\n");
    scanf("%d",&c);
    printf("Enter the number of line you want to print :\n");
    scanf("%d",&i);
    switch (c)
    {
    case 1:
        tri1(i);        
        break;
    case 2:
        tri2(i);
        break;
    case 3:
        tri3(i);
        break;
    case 4:
        tri4(i);
        break;
    case 5:
        tri5(i);
        break;
    case 6:
        tri6(i);
        break;
    default:
        printf("Enter the correct option.\n");
        break;
    }
    
    
    return 0;
}
void tri1(int i)
{
    for(int j=1;j<=i;j++)
    {
        for(int k=1;k<=i-j;k++)
        {
            printf(" ");
        }
        for(int k=1;k<=j;k++)
            printf("*");
        if(j>1)
        {
            for(int k=1;k<=j-1;k++)
            printf("*");
        }
            printf("\n");

    }
}
void tri2(int i)
{
    int m=1;
    for(int j=1;j<=i;j++)
    {
        for(int k=1;k<=(i-j)/2;k++)
        {
            printf(" ");
        }
        printf(" %d\n",m);
        m=m*11;
    }
}
void tri3(int i)
{
    int t=1;
    for(int j=1;j<=i;j++)
    {
        for(int k=1;k<=i-j;k++)
        {
            printf(" ");
        }
        for(int k=1;k<=j;k++)
        {    
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
}
void tri4(int i)
{
    for(int j=1;j<=i;j++)
    {
        for(int k=1;k<=i-j;k++)
        {
            printf(" ");
        }
        for(int k=1;k<=j;k++)
        {    
            printf("%d",k);
        }
        printf("\n");
    }
}
void tri5(int i)
{
    for(int j=1;j<=i;j++)
    {
        for(int k=65;k<65+j;k++)
        {    
            printf("%c",k);
        }
        printf("\n");
    }
}
void tri6(int i)
{
    int k=65;
    for(int j=1;j<=i;j++)
    {
        for(int t=k;t>k-j;t--)
        {    
            printf("%c",t);
        }
        printf("\n");
        k++;
    }
}