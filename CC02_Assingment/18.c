/*Write a program which takes the radius of a circle as input from the user, passes it to another 
function that computes the area and the circumference of the circle and displays the value of area 
and circumference from the main() function.*/
#include<stdio.h>

float circle(float r);

int main()
{
    float r;
    printf("Enter the radius of the Circle :\n");
    scanf("%f",&r);
    circle(r);
    return 0;
}
float circle(float r)
{
    float pi,area,cir;
    pi=22.0/7.0;
    area=pi*r*r;
    cir=2*pi*r;
    printf("Area of the Circle is %.2f and Circumference is %.2f.",area,cir);    
}