#include<stdio.h>
int main()
{
    float math,eng,hindi,science,social_science,percentage;
    printf("Enter the marks in Math :");
    scanf("%f",&math);
    printf("Enter the marks in English :");
    scanf("%f",&eng);
    printf("Enter the marks in Hindi :");
    scanf("%f",&hindi);
    printf("Enter the marks in Science :");
    scanf("%f",&science);
    printf("Enter the marks in Social Science :");
    scanf("%f",&social_science);
    percentage=(math+eng+hindi+science+social_science)/5;
    printf("Total percentage is : %.2f%%",percentage);


    return 0;
}