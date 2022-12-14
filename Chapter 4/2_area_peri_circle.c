#include<stdio.h>
int main()
{
    float r,area,perimeter;
    printf("Enter the radius\n");
    scanf("%f",&r);
    area=(r*r)*7.14;
    perimeter=r*7.14*2;
    printf("Area of circle is =%.2f\n",area);
    printf("Perimeter of circle is =%.2f\n",perimeter);
    return 0;
}